#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"
class Triangle
{
public:
	Triangle(Point a, Point b, Point c);
	~Triangle();
	inline Point getPointA() const;
	inline Point getPointB() const;
	inline Point getPointC() const;
	void setPointA(Point point);
	void setPointB(Point point);
	void setPointC(Point point);
	float getLongueur(Point a, Point b) const;
	inline float getBase() const;
	inline float getHauteur() const;
	inline float getSurface() const;
	inline bool isIsocele();
	inline bool isRectangle();
	inline bool isEquilateral();
	void afficher();
private:
	Point a;
	Point b;
	Point c;
	float ab;
	float bc;
	float ac;
};

#endif // TRIANGLE_H