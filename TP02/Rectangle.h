#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.h"
class Rectangle {
public : 
	~Rectangle();
	Rectangle(int longueur, int largeur, Point coinSupGauche);
	inline int getLongueur() const;
	inline int getLargeur() const;
	inline void setLongueur(int valeur);
	inline void setLargeur(int valeur);
	inline Point getPoint() const;
	void setPoint(Point point);
	inline int getPerimetre() const;
	inline int getSurface() const;
	void afficher();

private: 
	int longueur;
	int largeur;
	Point coinSupGauche;
};
#endif // RECTANGLE_H
