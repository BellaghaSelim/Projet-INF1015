#pragma once
#include "Position.h"
#include <iostream>
#include <vector>
#include <string>


class Piece {

public:
	Piece();
	~Piece();
	void deplacement(Position deplacement);
	virtual bool verifierDeplacement(Position deplacement);


private:
	Position m_position;
	std::vector<Position> m_deplacementPossible;
};