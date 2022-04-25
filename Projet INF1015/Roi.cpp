#include "Roi.h"
#include "Position.h"
#include <stdexcept>

int DeplacementPieces::Roi::m_nbInstances = 0;

DeplacementPieces::Roi::Roi() {
	m_nbInstances++;
	if (m_nbInstances > 2)
		throw std::runtime_error("il y a deja 2 roi");
}

DeplacementPieces::Roi::Roi(Couleur couleur) : Piece(couleur) {
}

DeplacementPieces::Roi::~Roi() {

}

void DeplacementPieces::Roi::deplacement(Position deplacement) {

	if (-1 <= deplacement.getPosition_x() && deplacement.getPosition_x() <= 1 &&
		-1 <= deplacement.getPosition_y() && deplacement.getPosition_y() <= 1) {
		if (verifierDeplacement(deplacement)) {
			m_position + deplacement;
		}
		else {
			std::cout << "Ce deplacement n'est pas possible" << std::endl;
		}
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}

}

bool DeplacementPieces::Roi::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

