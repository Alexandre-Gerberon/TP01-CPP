#ifndef MORPION_H
#define MORPION_H
#include "Case.h"
#include "Player.h"
class Morpion
{
public:
	Morpion(Player player1, Player player2);
	~Morpion();
	void placerPion(Case emplacements, Player player);
	bool isGrilleFull();
	bool isPlayerWin(Player player);
	bool isColonneWin(Player player);
	bool isLigneWin(Player player);
	bool isDiagonalWin(Player player);
	void AfficherGrille();
private:
	Case grille[3][3];
	Player player1;
	Player player2;
};
#endif // MORPION_H
