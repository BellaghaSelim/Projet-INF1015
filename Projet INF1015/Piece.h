#pragma once
#include "Position.h"
#include <iostream>
#include <vector>
#include <string>

enum Couleur
{
	Blanc=0,
	Noir=1,
};

class Piece {

public:
	Piece(Couleur couleur);
	Piece();
	~Piece();
	void deplacement(Position deplacement);
	virtual bool verifierDeplacement(Position deplacement);


private:
	Position m_position;
	std::vector<Position> m_deplacementPossible;
	Couleur m_couleur;
};