#define _USE_MATH_DEFINES
#include "Rectangle.h"
#include "Cercle.h"
#include "Triangle.h"
#include <math.h>
#include <iostream>
int main()
{
	// Rectangle
	Point r{0,0}; // Cr�ation du point sup�rieur gauche du rectangle avec pour coordonn�es 0,0
	Rectangle *rectangle = new Rectangle{ 10, 5, r}; // Cr�ation de l'objet rectangle
	rectangle->afficher(); // Appel de la m�thode afficher du rectangle
	delete rectangle; // Destruction du rectangle


	// Cercle
	Point c{ 50,30 }; // Cr�ation du centre du cercle qui a pour coordonn�es 50,30
	Point cA{ 0,0 }; // Cr�ation d'un point 0,0
	Cercle *cercle = new Cercle{ c,20 };  // Cr�ation de l'objet cercle
	cercle->afficher(); // Appel de la m�thode afficher du cercle
	std::cout << "Le centre est-il dans le cercle ? : " << cercle->isInCercle(c) << std::endl; // Appel de la m�thode isInCercle
	std::cout << "Le point 0,0 est-il dans le cercle ? : " << cercle->isInCercle(cA) << std::endl;
	std::cout << "Le centre est-il sur le cercle ? : " << cercle->isOnCercle(c) << std::endl; // Appel de la m�thode isInCercle
	std::cout << "Le point 0,0 est-il dans le cercle ? : " << cercle->isInCercle(cA) << std::endl;
	delete cercle; // Desctruction de l'objet cercle


	// Triangle equilateral
	Point triangleAA{ 0,0 }; // Cr�ation du point A du triangle avec pour coordonn�es 0,0
	Point triangleAB{ 2,0 }; // Cr�ation du point B du triangle avec pour coordonn�es 2,0
	Point triangleAC{ 1, sqrt(3) }; // Cr�ation du point C du triangle avec pour coordonn�es 1,sqrt(3)
	Triangle* triangleA = new Triangle{ triangleAA, triangleAB, triangleAC }; // Cr�ation de l'objet triangleA
	triangleA->afficher(); // Appel de la m�thode afficher du triangleA
	delete triangleA; // Destruction de triangleA
	// Triangle rectangle
	Point triangleBA{ 0,0 }; // Cr�ation du point A du triangle avec pour coordonn�es 0,0
	Point triangleBB{ 0,3 }; // Cr�ation du point B du triangle avec pour coordonn�es 0,3
	Point triangleBC{ 4, 0 }; // Cr�ation du point C du triangle avec pour coordonn�es 4,0
	Triangle* triangleB= new Triangle{ triangleBA, triangleBB, triangleBC }; // Cr�ation de l'objet triangleB
	triangleB->afficher(); // Appel de la m�thode afficher du triangleB
	delete triangleB; // Destruction de triangleB
	// Triangle isocele
	Point triangleCA{ 0,0 }; // Cr�ation du point A du triangle avec pour coordonn�es 0,0
	Point triangleCB{ 2,0 }; // Cr�ation du point B du triangle avec pour coordonn�es 2,0
	Point triangleCC{ 1, 5 }; // Cr�ation du point C du triangle avec pour coordonn�es 1,5
	Triangle* triangleC = new Triangle{ triangleCA, triangleCB, triangleCC }; // Cr�ation de l'objet triangleC
	triangleC->afficher(); // Appel de la m�thode afficher du triangleC
	delete triangleC; // Destruction de triangleC
}