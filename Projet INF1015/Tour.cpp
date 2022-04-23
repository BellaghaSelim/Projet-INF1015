#include "Tour.h"

DeplacementPieces::Tour::Tour() {
}

DeplacementPieces::Tour::Tour(Couleur couleur) : Piece(couleur) {

}

DeplacementPieces::Tour::~Tour() {

}

void DeplacementPieces::Tour::deplacement(Position deplacement) {

	if (verifierDeplacement(deplacement)) {
		m_position + deplacement;
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}

}

bool DeplacementPieces::Tour::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

