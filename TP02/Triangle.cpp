#define _USE_MATH_DEFINES
#include "Triangle.h"
#include <math.h>
#include <iostream>

Triangle::Triangle(Point a, Point b, Point c) { // Constructeur de la classe Triangle prenant en paramètre un Point a, un Point b, un Point c
	this->a = a; 
	this->b = b;
	this->c = c;
	this->ab = getLongueur(a, b);
	this->bc = getLongueur(b, c);
	this->ac = getLongueur(a, c);
}
Triangle::~Triangle(){} // Destructeur de la classe Triangle
Point Triangle::getPointA() const { // Getter retournant le point a
	return a;
}
Point Triangle::getPointB() const { // Getter retournant le point b
	return b;
}
Point Triangle::getPointC() const { // Getter retournant le point c
	return c;
}
void Triangle::setPointA(Point point) { // Setter définissant le point a
	this->a = point;
}
void Triangle::setPointB(Point point) { // Setter définissant le point b
	this->b = point;
}
void Triangle::setPointC(Point point) { // Setter définissant le point c
	this->c = point;
}
float Triangle::getLongueur(Point a, Point b) const{ // Fonction retournant la distance entre deux points passés en paramètre
	return sqrt(((a.x - b.x) * (a.x - b.x)) + ((a.y - b.y) * (a.y - b.y)));
}
float Triangle::getBase() const { // Fonction retournant la plus grande longueur du triangle
	if (ab == bc == ac || ab > bc && ab > ac) {
		return ab;
	}
	else if (bc > ac) {
		return bc;
	}
	else {
		return ac;
	}
}
float Triangle::getHauteur() const { // Fonction retournant la hauteur du triangle
	return (getSurface() * 2) / getBase();
}
float Triangle::getSurface() const { // Fonction retournant la surface du triangle
	return (ab + bc + ac) / 2;
}
bool Triangle::isIsocele() { // Fonction retournant si un triangle est isocele ou non
	return bool((ab == bc || ab == ac || bc == ac) && !(isEquilateral()));
}
bool Triangle::isEquilateral() { // Fonction retournant si un triangle est equilateral ou non
	return bool(ab == bc && bc == ac);
}
bool Triangle::isRectangle() { // Fonction retournant si un triangle est rectangle ou non
	float hypotenuse = getBase();
	return bool((hypotenuse * hypotenuse) == ((bc * bc) + (ac * ac)) || (hypotenuse * hypotenuse) == ((ab * ab) + (ac * ac)) || (hypotenuse * hypotenuse) == ((ab * ab) + (bc * bc))); 
	// Un triangle est rectangle si le carré de l'hypoténus est égal à la somme des carrés des deux autres côtés
}
void Triangle::afficher() { // Fonction retournant toutes les informations sur le triangle dans la sortie console
	std::cout << " === INFORMATIONS SUR LE TRIANGLE ===" << std::endl;
	std::cout << "Base : " << getBase() << std::endl;
	std::cout << "Hauteur : " << getHauteur() << std::endl;
	std::cout << "Surface : " << getSurface() << std::endl;
	std::cout << "Longueur AB : " << ab << std::endl;
	std::cout << "Longueur BC : " << bc << std::endl;
	std::cout << "Longueur AC : " << ac << std::endl;
	std::cout << "Est-il isocele ? : " << isIsocele() << std::endl;
	std::cout << "Est-il equilateral ? : " << isEquilateral() << std::endl;
	std::cout << "Est-il rectangle ? : " << isRectangle() << std::endl;
}