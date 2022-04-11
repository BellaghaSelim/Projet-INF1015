#include "Pion.h"
#include "Position.h"

Pion::Pion(){
}

Pion::~Pion(){

}

void Pion::deplacement(Position deplacement) {

	if (verifierDeplacement(deplacement)) {

		if (m_premierDeplacement) {
			m_position + deplacement;
			m_premierDeplacement = false;
		}
		else if (deplacement.getPosition_y() <= 1) {
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

bool Pion::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

