#ifndef CASE_H
#define CASE_H
#include "Point.h"
#include <string>
#include "Player.h"

class Case {
public :
	Case();
	Case(Point emplacement);
	~Case();
	std::string getContenu() const;
	void setContenu(std::string contenu);
	Point getEmplacement() const;
	Pion getPion() const;
	bool isEmpty();
	bool isX();
	bool isO();
private :
	Point emplacement;
	std::string contenu;
};

#endif // CASE_H
