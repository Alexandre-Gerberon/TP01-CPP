#include "Case.h"
Case::Case(){}
Case::~Case() {}
Case::Case(Point emplacement) {
	this->emplacement = emplacement;
	this->contenu;
}
std::string Case::getContenu() const {
	return contenu;
}
Point Case::getEmplacement() const {
	return emplacement;
}
void Case::setContenu(std::string contenu) {
	this->contenu = contenu;
}
bool Case::isEmpty() {
	if (contenu.empty()) {
		return true;
	}
	else {
		return false;
	}
}
bool Case::isX() {
	if (contenu == "X") {
		return true;
	}
	else {
		return false;
	}
}
bool Case::isO() {
	if (contenu == "O") {
		return true;
	}
	else {
		return false;
	}
}
Pion Case::getPion() const{
	if (contenu == "O") {
		return Pion::O;
	}
	else if (contenu == "X") {
		return Pion::X;
	}
}