#include <string>
#ifndef PLAYER_H
#define PLAYER_H

enum class Pion : int {
	O = 0,
	X = 1
};

class Player
{
public:
	Player();
	Player(std::string nom, Pion pion, bool isComputer);
	~Player();
	std::string getNom() const;
	Pion getPion() const;
private:
	std::string nom;
	Pion pion;
	bool isComputer;
};

#endif // PLAYER_H
