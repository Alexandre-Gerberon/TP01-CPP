#include "Morpion.h"
#include <iostream>
Morpion::~Morpion(){}
Morpion::Morpion(Player player1, Player player2) {
	this->player1 = player1;
	this->player2 = player2;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			this->grille[i][j] = Case(Point{ (float)i,(float)j });
		}
	}
	AfficherGrille();
}
void Morpion::placerPion(Case emplacement, Player player) {
	Point point = emplacement.getEmplacement();

		if (this->grille[(int)point.x][(int)point.y].isEmpty()) {
			if (player.getPion() == Pion::O) {
				this->grille[(int)point.x][(int)point.y].setContenu("O");
			}
			else if (player.getPion() == Pion::X) {
				this->grille[(int)point.x][(int)point.y].setContenu("X");
			}
		}
		else {
			std::cout << "Case déjà prise" << std::endl;
		}
}
bool Morpion::isGrilleFull() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (this->grille[i][j].isEmpty()) {
				return false;
			}
		}
	}
	return true;
}
bool Morpion::isColonneWin(Player player) {
	int count = 0;
	for (int j = 0; j < 3; j++) {
		count = 0;
		for (int i = 0; i < 3; i++) {
			if (this->grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty())) {
				count++;
				if (count == 3) {
					return true;
				}
			}
			else {
				count = 0;
			}
		}
		count = 0;
	}
	return false;
}
bool Morpion::isLigneWin(Player player) {
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (this->grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty())) {
				count++;
				if (count == 3) {
					return true;
				} 
			}
			else {
				count = 0;
			}
		}
		count = 0;
	}
	return false;
}
bool Morpion::isDiagonalWin(Player player) {
	int count = 0;
	int i = 0;
	for (int j = 0; j < 3; j = j++) {
		if (this->grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty())) {
			count++;
		}
		i++;
	}
	if (count == 3) {
		return true;
	}
	else {
		count = 0;
		int j = 2;
		for (int i = 0; i < 3; i++) {
			if (this->grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty())) {
				count++;
			}
			j--;
		}
		if (count == 3) {
			return true;
		}
		else {
			return false;
		}
	}

}
bool Morpion::isPlayerWin(Player player) {
	if (isDiagonalWin(player) || isColonneWin(player) || isLigneWin(player)) {
		return true;
	}
	else {
		return false;
	}
}
void Morpion::AfficherGrille() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (this->grille[i][j].isEmpty()) {
				std::cout << "   ";
			}
			else {
				std::cout << " " << this->grille[i][j].getContenu() << " ";
			}
			if (j != 2) {
				std::cout << "|";
			}
		}
		if (i != 2) {
			std::cout << "\n-----------";
		}
		std::cout << std::endl;
	}
}