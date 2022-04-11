#include "Piece.h"
#include "Position.h"
#include "Pion.h"


Piece::Piece()
{

}

Piece::~Piece() {

}

void Piece::deplacement(Position deplacement) {
	if (verifierDeplacement(deplacement)) {
			m_position + deplacement;
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}
}

bool Piece::verifierDeplacement(Position deplacement) {
	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (deplacement % m_deplacementPossible[i] == Position(0,0)) {
			return true;
		}
	}
	return false;
}