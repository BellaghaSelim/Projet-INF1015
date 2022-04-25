#pragma once
#pragma once
#include "Piece.h"
#include "Position.h"
#include "Deplacement.h"

namespace Modele {
	class Tour : public Piece
	{
	public:
		Tour();
		Tour(Couleur::Couleur couleur);
		~Tour();
		void deplacement(Position deplacement);
		std::vector<Position> getDeplacementPossible() { return m_deplacementPossible; };
		Position getPosition() { return m_position; };
		virtual bool verifierDeplacement(Position deplacement);


	private:
		Position m_position;
		std::vector<Position> m_deplacementPossible = Modele::deplacementTour;
		char m_nom = 'T';
	};
}

#pragma once
