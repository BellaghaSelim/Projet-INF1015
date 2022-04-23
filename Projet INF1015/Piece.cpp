#include "Piece.h"
#include "Position.h"
#include "Pion.h"


DeplacementPieces::Piece::Piece()
{

}

DeplacementPieces::Piece::Piece(std::vector<DeplacementPieces::Position> deplacementPossible) : m_deplacementPossible(deplacementPossible) {

}

DeplacementPieces::Piece::Piece(Couleur couleur): m_couleur(couleur) {
}

DeplacementPieces::Piece::~Piece() {

}

void DeplacementPieces::Piece::deplacement(Position deplacement) {
	if (verifierDeplacement(deplacement)) {
			m_position + deplacement;
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}
}

bool DeplacementPieces::Piece::verifierDeplacement(Position deplacement) {
	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (deplacement % m_deplacementPossible[i] == Position(0,0)) {
			return true;
		}
	}
	return false;
}