#ifndef CERCLE_H
#define CERCLE_H
#include "Point.h"
class Cercle
{
public :
	Cercle(Point centre, int diametre);
	~Cercle();
	inline int getDiametre() const;
	inline void setDiametre(int valeur);
	inline Point getCentre() const;
	void setCentre(Point point);
	inline double getPerimetre() const;
	inline double getSurface() const;
	inline int getRayon() const;
	float distanceCercleCenter(Point point); // Distance du point au centre du cercle
	bool isOnCercle(Point point); //  Détermine si un point passé en paramètre est sur le cercle
	bool isInCercle(Point point); // Détermine si un point passé en paramètre est à l'intérieur du cercle
	void afficher();
private :
	Point centre;
	int diametre;
};
#endif // CERCLE_H