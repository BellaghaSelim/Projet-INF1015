#pragma once
#include "Piece.h"
#include "Position.h"
#include "Deplacement.h"

namespace DeplacementPieces {
	class Roi : public Piece
	{
	public:
		Roi();
		Roi(Couleur couleur);
		~Roi();
		void deplacement(Position deplacement);
		std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
		Position getPosition() { return m_position; };
		virtual bool verifierDeplacement(Position deplacement);


	private:
		Position m_position;
		std::vector<Position> m_deplacementPossible = Deplacement::deplacementRoi;
		char m_nom = 'R';
		static int m_nbInstances;
	};
}

#pragma once
