#include "Tour.h"
#include "Position.h"

Tour::Tour() {
}

Tour::~Tour() {

}

void Tour::deplacement(Position deplacement) {

	if (verifierDeplacement(deplacement)) {
		m_position + deplacement;
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}

}

bool Tour::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

