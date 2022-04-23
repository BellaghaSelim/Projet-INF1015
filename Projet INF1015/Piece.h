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

namespace DeplacementPieces {
	class Piece {

	public:
		Piece(Couleur couleur);
		Piece(std::vector<Position> deplacementPossible);
		Piece();
		~Piece();
		void deplacement(Position deplacement);
		virtual bool verifierDeplacement(Position deplacement);
		Position getPosition() { return m_position; };
		Couleur getCouleur() { return m_couleur; };


	private:
		Position m_position;
		std::vector<Position> m_deplacementPossible;
		Couleur m_couleur;
	};
}