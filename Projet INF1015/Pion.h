#pragma once
#include "Piece.h"
#include "Position.h"
#include "Deplacement.h"


namespace DeplacementPieces {
	class Pion : public Piece
	{
	public:
		Pion();
		Pion(std::vector<Position> deplacementPossible);
		~Pion();
		Pion(Couleur couleur);
		void deplacement(Position deplacement);
		std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
		Position getPosition() { return m_position; };
		virtual bool verifierDeplacement(Position deplacement);


	private:
		std::vector<Position> m_deplacementPossible = DeplacementPiece::deplacementPion;
		Position m_position;
		bool m_premierDeplacement = true;
		char m_nom = 'P';
	};
}

