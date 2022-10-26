#include "Rectangle.h"
#include <iostream>
Rectangle::~Rectangle() {} // Destructeur de la classe Rectangle
Rectangle::Rectangle(int longueur, int largeur, Point coinSupGauche) { // Constructeur de la classe Rectangle prenant en argument la longueur, la largeur, le coin sup�rieur gauche
	this->longueur = longueur;
	this->largeur = largeur;
	this->coinSupGauche = coinSupGauche;
}
int Rectangle::getLongueur() const{ // Getter retournant la longueur
	return longueur;
}
int Rectangle::getLargeur() const { // Getter retournant la largeur
	return largeur;
}
Point Rectangle::getPoint() const { // Getter retournant le point du coin sup�rieur gauche
	return coinSupGauche;
}
void Rectangle::setLongueur(int valeur) { // Setter d�finissant la longueur
	this->longueur = valeur;
}
void Rectangle::setLargeur(int valeur) { // Setter d�finissant la largeur
	this->largeur = valeur;
}
void Rectangle::setPoint(Point point) { // Setter d�finissant le point du coin sup�rieur gauche
	this->coinSupGauche = point;
}
int Rectangle::getPerimetre() const { // Fonction retournant le p�rim�tre
	return (longueur + largeur) * 2;
}
int Rectangle::getSurface() const { // Fonction retournant la surface
	return longueur * largeur;
}
void Rectangle::afficher() { // Fonction retournant toutes les informations sur le rectangle dans la sortie console
	std::cout << " === INFORMATIONS SUR LE RECTANGLE ===" << std::endl;
	std::cout << "Longueur : : " << getLongueur() << std::endl;
	std::cout << "Largeur : " << getLargeur() << std::endl;
	std::cout << "Coin Superieur Gauche : \n" << "x : " << coinSupGauche.x << "\ny : " << coinSupGauche.y << std::endl;
	std::cout << "Perimetre : " << getPerimetre() << std::endl;
	std::cout << "Surface : " << getSurface() << std::endl;
}