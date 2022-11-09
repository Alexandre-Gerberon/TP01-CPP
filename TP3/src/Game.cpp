#include <iostream>
#include <string>
#include "Player.h"
#include "Morpion.h"
#include "Puissance4.h"
int main() {
	int choix;
	std::cout << "(1) Faire une partie de morpion" << std::endl;
	std::cout << "(2) Faire une partie de puissance 4" << std::endl;
	std::cin >> choix;
	Player player1 = Player("Player1", Pion::O, false);
	Player player2 = Player("Player2", Pion::X, false);
	switch (choix) {
	case (1) :
	{
		Morpion jeu = Morpion(player1, player2);
		float x;
		float y;
		while (!(jeu.isPlayerWin(player1) || jeu.isPlayerWin(player2) || jeu.isGrilleFull())) {
			std::cout << "Player1, placez votre pion ! Repondre sous la forme x y" << std::endl;
			std::cin >> x >> y;
			while (x > 2 || x < 0 || y > 2 || y < 0) {
				std::cout << "Placement en dehors de la grille" << std::endl;
				std::cout << "emplacement minimum : 0" << std::endl;
				std::cout << "emplacement maximum : 2" << std::endl;
				std::cout << "Player1, placez votre pion ! Repondre sous la forme x y" << std::endl;
				std::cin >> x >> y;
			}
			jeu.placerPion(Case(Point{ x, y }), player1);
			jeu.AfficherGrille();
			if (jeu.isPlayerWin(player1) || jeu.isGrilleFull()) {
				break;
			}
			std::cout << "Player2, placez votre pion ! Repondre sous la forme x y" << std::endl;
			std::cin >> x >> y;
			while (x > 2 || x < 0 || y > 2 || y < 0) {
				std::cout << "Placement en dehors de la grille" << std::endl;
				std::cout << "emplacement minimum : 0" << std::endl;
				std::cout << "emplacement maximum : 2" << std::endl;
				std::cout << "Player2, placez votre pion ! Repondre sous la forme x y" << std::endl;
				std::cin >> x >> y;
			}
			jeu.placerPion(Case(Point{ x, y }), player2);
			jeu.AfficherGrille();
			jeu.isPlayerWin(player2);
		}
		if (jeu.isPlayerWin(player2)) {
			std::cout << "Bravo Player2" << std::endl;
		}
		else if (jeu.isPlayerWin(player1)) {
			std::cout << "Bravo  Player1" << std::endl;
		}
		else {
			std::cout << "Egalité" << std::endl;
		}
		//delete& jeu;
		break;
	}
	case (2):
		Puissance4 jeu = Puissance4(player1, player2);
		int colonne;
		while (!(jeu.isPlayerWin(player1) || jeu.isPlayerWin(player2) || jeu.isGrilleFull())) {
			std::cout << "Player1, placez votre pion ! Repondre sous la forme x" << std::endl;
			std::cin >> colonne;
			while (colonne < -1 || colonne > 6) {
				std::cout << "Placement en dehors de la grille" << std::endl;
				std::cout << "emplacement maximum : 6" << std::endl;
				std::cout << "Player1, placez votre pion ! Repondre sous la forme x" << std::endl;
				std::cin >> colonne;
			}
			jeu.placerPion(colonne, player1);
			jeu.AfficherGrille();
			if (jeu.isPlayerWin(player1) || jeu.isGrilleFull()) {
				break;
			}
			std::cout << "Player2, placez votre pion ! Repondre sous la forme x" << std::endl;
			std::cin >> colonne;
			while (colonne < -1 || colonne > 6) {
				std::cout << "Placement en dehors de la grille" << std::endl;
				std::cout << "emplacement maximum : 6" << std::endl;
				std::cout << "Player2, placez votre pion ! Repondre sous la forme x" << std::endl;
				std::cin >> colonne;
			}
			jeu.placerPion(colonne, player2);
			jeu.AfficherGrille();
			jeu.isPlayerWin(player2);
		}
		if (jeu.isPlayerWin(player2)) {
			std::cout << "Bravo Player2" << std::endl;
		}
		else if (jeu.isPlayerWin(player1)) {
			std::cout << "Bravo  Player1" << std::endl;
		}
		else {
			std::cout << "Egalité" << std::endl;
		}
		//delete& jeu;
		break;
	}

}