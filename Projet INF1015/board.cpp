#include "board.h"
#include "Piece.h"
#include "Roi.h"
#include <typeinfo>

namespace Modele {
	Modele::Board::Board() {

		for (int i = 0; i < this->nombreLignes_; i++) {
			for (int j = 0; j < this->nombreColonnes_; j++) {
				this->board_[i][j] = nullptr;
			}
		}

	};


	Modele::Board::~Board() {
		for (int i = 0; i < this->nombreLignes_; i++) {
			for (int j = 0; j < this->nombreColonnes_; j++) {
				this->board_[i][j] = nullptr;
				
			}
		}
	};

	
	/*void Modele::Board::ajouterPiece(Board board, Modele::Piece* piece, Modele::Position position) {
		if (board.board_[position.getPosition_x()][position.getPosition_y()] == nullptr) {
			piece->getPosition() = position;
		}
	};*/

	
	Modele::Position Modele::Board::retrouverPosRoi(Couleur::Couleur couleur) {
		for (int i = 0; i < nombreLignes_; i++) {
			for (int j = 0; j < nombreColonnes_; j++) {
				if (typeid(board_[i][j]) == typeid(Modele::Roi) && (board_[i][j]->getCouleur()) == couleur) {
					return board_[i][j]->getPosition();
				}
				else std::cout << "Cette pièce n'est pas en jeu\n"; // pas de roi => partie finie
			}
		}
		
	};

	std::vector<Piece*> Modele::Board::retrouverToutesLesPieces(Couleur::Couleur couleur) {
		std::vector<Piece*> vecteurDePieces = {};
		for (int i = 0; i < this->nombreLignes_; i++) {
			for (int j = 0; j < this->nombreColonnes_; j++) {
				if (this->board_[i][j] != nullptr && this->board_[i][j]->getCouleur() == couleur) {
					vecteurDePieces.push_back(this->board_[i][j]);
				}
			}
		}
		return vecteurDePieces;
	};

	bool Modele::Board::verifierEchec() {
		Modele::Position posRoiBlanc = retrouverPosRoi(Couleur::Blanc);
		Modele::Position posRoiNoir = retrouverPosRoi(Couleur::Noir);
		std::vector<Piece*> piecesRestantesBlanches = retrouverToutesLesPieces(Couleur::Blanc);
		std::vector<Piece*> pieceRestantesNoires = retrouverToutesLesPieces(Couleur::Noir);

		/*for (int i = 0; i < piecesRestantesBlanches; i++) {
			for (int j=0; j)
			piecesRestantesBlanches[i]->m_position+
		}*/







		return true;
	}
}