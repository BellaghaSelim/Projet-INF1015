#pragma once
#pragma once
#include "Piece.h"
#include "Position.h"
#include "Deplacement.h"

namespace DeplacementPieces {
	class Tour : public Piece
	{
	public:
		Tour();
		Tour(Couleur couleur);
		~Tour();
		void deplacement(Position deplacement);
		std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
		Position getPosition() { return m_position; };
		virtual bool verifierDeplacement(Position deplacement);


	private:
		Position m_position;
		std::vector<Position> m_deplacementPossible = Deplacement::deplacementTour;
		char m_nom = 'T';
	};
}

#pragma once
