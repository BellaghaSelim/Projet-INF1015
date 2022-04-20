#pragma once
#pragma once
#include "Piece.h"
#include "Position.h"

class Tour : public ActeursDuJeu::Piece
{
public:
	Tour();
	Tour(ActeursDuJeu::Couleur couleur);
	~Tour();
	void deplacement(Position deplacement);
	std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
	Position getPosition() { return m_position; };
	virtual bool verifierDeplacement(Position deplacement);


private:
	Position m_position;
	std::vector<Position> m_deplacementPossible{ Position(0,1), Position(0,-1), Position(1,0), Position(-1,0) };
	char m_nom = 'T';
};

#pragma once
