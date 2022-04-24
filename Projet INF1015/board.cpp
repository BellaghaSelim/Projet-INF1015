#include "board.h"
#include "Piece.h"
#include "Roi.h"
#include <typeinfo>

namespace EspaceDeJeu {
	EspaceDeJeu::Board::Board() {

		for (int i = 0; i < nombreLignes_; i++) {
			for (int j = 0; j < nombreColonnes_; j++) {
				board_[i][j] = nullptr;
			}
		}

	};


	EspaceDeJeu::Board::~Board() {
		for (int i = 0; i < nombreLignes_; i++) {
			for (int j = 0; j < nombreColonnes_; j++) {
				board_[i][j] = nullptr;
				
			}
		}
	};

	
	/*void EspaceDeJeu::Board::ajouterPiece(Board board, DeplacementPieces::Piece* piece, DeplacementPieces::Position position) {
		if (board.board_[position.getPosition_x()][position.getPosition_y()] == nullptr) {
			piece->getPosition() = position;
		}
	};*/

	
	DeplacementPieces::Position EspaceDeJeu::Board::retrouverPosRoi(DeplacementPieces::Couleur couleur) {
		for (int i = 0; i < nombreLignes_; i++) {
			for (int j = 0; j < nombreColonnes_; j++) {
				if (typeid(board_[i][j]) == typeid(DeplacementPieces::Roi) && (board_[i][j]->getCouleur()) == couleur) {
					return board_[i][j]->getPosition();
				}
				else std::cout << "Cette pièce n'est pas en jeu\n"; // pas de roi => partie finie
			}
		}
		
	};

	std::vector<DeplacementPieces::Piece*> EspaceDeJeu::Board::retrouverToutesLesPieces(DeplacementPieces::Couleur couleur) {
		std::vector<DeplacementPieces::Piece*> vecteurDePieces = {};
		for (int i = 0; i < nombreLignes_; i++) {
			for (int j = 0; j < nombreColonnes_; j++) {
				if (board_[i][j] != nullptr && board_[i][j]->getCouleur() == couleur) {
					vecteurDePieces.push_back(board_[i][j]);
				}
			}
		}
		return vecteurDePieces;
	};

	bool EspaceDeJeu::Board::verifierEchec() {
		DeplacementPieces::Position posRoiBlanc = retrouverPosRoi(DeplacementPieces::Blanc);
		DeplacementPieces::Position posRoiNoir = retrouverPosRoi(DeplacementPieces::Noir);
		std::vector<DeplacementPieces::Piece*> piecesRestantesBlanches = retrouverToutesLesPieces(DeplacementPieces::Blanc);
		std::vector<DeplacementPieces::Piece*> pieceRestantesNoires = retrouverToutesLesPieces(DeplacementPieces::Noir);

		/*for (int i = 0; i < piecesRestantesBlanches; i++) {
			for (int j=0; j)
			piecesRestantesBlanches[i]->m_position+
		}*/







		return true;
	}
}