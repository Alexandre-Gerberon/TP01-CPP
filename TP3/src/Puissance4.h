#ifndef PUISSANCE4_H
#define PUISSANCE4_H
#include "case.h"
class Puissance4
{
public:
	Puissance4(Player player1, Player player2);
	~Puissance4();
	void placerPion(int colonne, Player player);
	bool isGrilleFull();
	bool isPlayerWin(Player player);
	bool isColonneWin(Player player);
	bool isLigneWin(Player player);
	bool isDiagonalWin(Player player);
	void AfficherGrille();
private:
	Case grille[4][7];
	Player player1;
	Player player2;
};

#endif // PUISSANCE4_H

