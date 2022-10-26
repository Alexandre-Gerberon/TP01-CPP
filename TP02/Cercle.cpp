#define _USE_MATH_DEFINES
#include "Cercle.h"
#include <math.h>
#include <iostream>

Cercle::Cercle(Point centre, int diametre) { // Constructeur de la classe Cercle prenant en argument le point centre, le diametre
	this->centre = centre;
	this->diametre = diametre;
}
Cercle::~Cercle() {} // Destructeur de la classe Cercle
Point Cercle::getCentre() const { // Getter retournant le centre du cercle
	return centre;
}
int Cercle::getDiametre() const { // Getter retournant le diamètre
	return diametre;
}
void Cercle::setDiametre(int valeur) { // Setter définissant le diamètre
	this->diametre = valeur;
}
void Cercle::setCentre(Point point) { // Setter définissant le centre
	this->centre = point;
}
int Cercle::getRayon() const { // Fonction retournant le rayon
	return (diametre / 2);
}
double Cercle::getPerimetre() const { // Fonction retournant le périmètre
	return 2 * M_PI * getRayon();
}
double Cercle::getSurface() const { // Fonction retournant la surface
	return (diametre / 2) * getRayon() * M_PI;
}
float Cercle::distanceCercleCenter(Point point) { // Fonction retournant la distance entre le centre du cercle et un point passé en argument
	return sqrt(((point.x - centre.x) * (point.x - centre.x)) + ((centre.y - point.y) * (centre.y - point.y)));
}
bool Cercle::isOnCercle(Point point) { // Function retournant si le point passé en argument est sur le cercle
	return bool(distanceCercleCenter(point) == getRayon());
}
bool Cercle::isInCercle(Point point) {
	return bool(distanceCercleCenter(point) < getRayon()); // Function retournant si le point passé en argument est dans le cercle
}
void Cercle::afficher() { // Fonction retournant toutes les informations sur le cercle dans la sortie console
	std::cout << " === INFORMATIONS SUR LE CERCLE ===" << std::endl;
	std::cout << "Diametre : " << getDiametre() << std::endl;
	std::cout << "Rayon : " << getRayon() << std::endl;
	std::cout << "Perimetre : " << getPerimetre() << std::endl;
	std::cout << "Surface : " << getSurface() << std::endl;
}