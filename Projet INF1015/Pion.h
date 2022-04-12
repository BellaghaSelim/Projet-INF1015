#pragma once
#include "Piece.h"
#include "Position.h"

class Pion : public Piece
{
public:
	Pion();
	~Pion();
	Pion(Couleur couleur);
	void deplacement(Position deplacement);
	std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
	Position getPosition() { return m_position; };
	virtual bool verifierDeplacement(Position deplacement);


private:
	Position m_position;
	std::vector<Position> m_deplacementPossible{ Position(0,1) };
	bool m_premierDeplacement = true;
	char m_nom = 'P';
};

