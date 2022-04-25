#include "Piece.h"
#include "Position.h"
#include "Pion.h"


	Piece::Piece()
	{

	}

	Piece::Piece(std::vector<Modele::Position> deplacementPossible) : m_deplacementPossible(deplacementPossible) {

	}

	Piece::Piece(Couleur::Couleur couleur) : m_couleur(couleur) {
	}

	Piece::~Piece() {

	}

	void Piece::deplacement(Modele::Position deplacement) {
		if (verifierDeplacement(deplacement)) {
			m_position + deplacement;
		}
		else {
			std::cout << "Ce deplacement n'est pas possible" << std::endl;
		}
	}

	bool Piece::verifierDeplacement(Modele::Position deplacement) {
		for (int i = 0; i < m_deplacementPossible.size(); i++) {

			if (deplacement % m_deplacementPossible[i] == Modele::Position(0, 0)) {
				return true;
			}
		}
		return false;
	}

	void Piece::setPosition(Modele::Board board, Modele::Position position) {
		if (board.board_[position.getPosition_x()][position.getPosition_y()] == nullptr) {
			m_position = position;
		}
	}
