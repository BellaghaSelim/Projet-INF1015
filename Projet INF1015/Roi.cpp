#include "Roi.h"
#include "Position.h"

Roi::Roi() {
}

Roi::Roi(Couleur couleur) : Piece(couleur) {

}

Roi::~Roi() {

}

void Roi::deplacement(Position deplacement) {

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

bool Roi::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

