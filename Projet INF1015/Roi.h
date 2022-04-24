#pragma once
#include "Piece.h"
#include "Position.h"
#include "Deplacement.h"

namespace DeplacementPieces {
	class Roi : public Piece
	{
	public:
		
		Roi(Couleur couleur);
		~Roi();
		void deplacement(Position deplacement);
		std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
		Position getPosition() { return m_position; };
		virtual bool verifierDeplacement(Position deplacement);
		void resetInstances();


	private:
		Position m_position;
		std::vector<Position> m_deplacementPossible = DeplacementPieces::deplacementRoi;
		char m_nom = 'R';
		static int m_nbInstances; //inline ne marche pas donc j'ai initialise dans le cpp
	};
}

#pragma once
