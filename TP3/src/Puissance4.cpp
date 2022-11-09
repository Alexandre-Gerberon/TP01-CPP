#include "Puissance4.h"
#include <iostream>
Puissance4::~Puissance4() {}
Puissance4::Puissance4(Player player1, Player player2) {
	this->player1 = player1;
	this->player2 = player2;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			this->grille[i][j] = Case(Point{ (float)i,(float)j });
		}
	}
	AfficherGrille();
}
void Puissance4::placerPion(int colonne, Player player) {
	for (int i = 6; i > -1; i--) {
		if (this->grille[i][colonne].isEmpty()) {
			if (player.getPion() == Pion::O) {
				this->grille[i][colonne].setContenu("O");
			}
			else if (player.getPion() == Pion::X) {
				this->grille[i][colonne].setContenu("X");
			}
			break;
		}
	}
}
bool Puissance4::isGrilleFull() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (this->grille[i][j].isEmpty()) {
				return false;
			}
		}
	}
	return true;
}
bool Puissance4::isColonneWin(Player player) {
	int count = 0;
	for (int j = 0; j < 7; j++) {
		count = 0;
		for (int i = 0; i < 4; i++) {
			if (this->grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty())) {
				count++;
				if (count == 4) {
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
bool Puissance4::isLigneWin(Player player) {
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (this->grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty())) {
				count++;
				if (count == 4) {
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
bool Puissance4::isDiagonalWin(Player player) {
	for (int i = 3; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty()) &&
				grille[i - 1][j + 1].getPion() == player.getPion() && !(this->grille[i - 1][j + 1].isEmpty()) &&
				grille[i - 2][j + 2].getPion() == player.getPion() && !(this->grille[i - 2][j + 2].isEmpty()) &&
				grille[i - 3][j + 3].getPion() == player.getPion() && !(this->grille[i - 3][j + 3].isEmpty())) {
				return true;
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			if (grille[i][j].getPion() == player.getPion() && !(this->grille[i][j].isEmpty()) &&
				grille[i + 1][j + 1].getPion() == player.getPion() && !(this->grille[i + 1][j + 1].isEmpty()) &&
				grille[i + 2][j + 2].getPion() == player.getPion() && !(this->grille[i + 2][j + 2].isEmpty()) &&
				grille[i + 3][j + 3].getPion() == player.getPion() && !(this->grille[i + 3][j + 3].isEmpty())) {
				return true;
			}
		}
	}
	return false;
}
bool Puissance4::isPlayerWin(Player player) {
	if (isColonneWin(player) || isLigneWin(player) || isDiagonalWin(player)) {
		return true;
	}
	else {
		return false;
	}
}
void Puissance4::AfficherGrille() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			if (this->grille[i][j].isEmpty()) {
				std::cout << "   ";
			}
			else {
				std::cout << " " << this->grille[i][j].getContenu() << " ";
			}
			if (j != 6) {
				std::cout << "|";
			}
		}
		if (i != 3) {
			std::cout << "\n---------------------------";
		}
		std::cout << std::endl;
	}
}