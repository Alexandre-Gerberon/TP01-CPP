#include "Player.h"
Player::Player() {}
Player::~Player(){}
Player::Player(std::string nom, Pion pion, bool isComputer) {
	this->nom = nom;
	this->pion = pion;
	this->isComputer = isComputer;
}
std::string Player::getNom() const {
	return nom;
}
Pion Player::getPion() const {
	return pion; 
}