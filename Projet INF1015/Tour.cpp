#include "Tour.h"

Modele::Tour::Tour() {
}

Modele::Tour::Tour(Couleur::Couleur couleur) : Piece(couleur) {

}

Modele::Tour::~Tour() {

}

void Modele::Tour::deplacement(Position deplacement) {

	if (verifierDeplacement(deplacement)) {
		m_position + deplacement;
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}

}

bool Modele::Tour::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

