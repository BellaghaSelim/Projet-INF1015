#pragma once
#include "Piece.h"
#include "Position.h"

class Roi : public ActeursDuJeu::Piece
{
public:
	Roi();
	Roi(ActeursDuJeu::Couleur couleur);
	~Roi();
	void deplacement(Position deplacement);
	std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
	Position getPosition() { return m_position; };
	virtual bool verifierDeplacement(Position deplacement);
	int getCompteur();


private:
	Position m_position;
	std::vector<Position> m_deplacementPossible{ Position(0,1), Position(0,-1), Position(1,0), Position(-1,0) };
	char m_nom = 'R';
	static int compteur_; 
};

#pragma once
