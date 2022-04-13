#include "board.h"
#include "Piece.h"
#include "Roi.h"
#include <typeinfo>



Board::Board() {

	for (int i = 0; i <nombreLignes_; i++) {
		for (int j = 0; j <nombreColonnes_; j++) {
			board_[i][j]=nullptr;
		}
	}

}


Board::~Board() {
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			board_[i][j] = nullptr;
			delete board_;
		}
	}
}

void Board::initialiserPiece(int ligne, int colonne, Piece* piece) {
	board_[ligne][colonne] = piece;
}

void Board::reinisitialiserCase(int ligne, int colonne) {
	board_[ligne][colonne] = nullptr;
}

Position Board::retrouverPosRoi(Couleur couleur) {
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			if (typeid(*board_[i][j]) == typeid(Roi) && board_[i][j]->m_couleur == couleur) {
				return board_[i][j]->m_position;
			}
			else std::cout << "Cette pièce n'est pas en jeu\n"; // pas de roi => partie finie
		}
	}
}

std::vector<Piece*> Board::retrouverToutesLesPieces(Couleur couleur) {
	std::vector<Piece*> vecteurDePieces = {};
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			if (board_[i][j] != nullptr && board_[i][j]->m_couleur==couleur) {
				vecteurDePieces.push_back(board_[i][j]);
			}
		}
	}
	return vecteurDePieces;
}

bool Board::verifierEchec(){
	Position posRoiBlanc = retrouverPosRoi(Blanc);
	Position posRoiNoir  = retrouverPosRoi(Noir);
	std::vector<Piece*> piecesRestantesBlanches = retrouverToutesLesPieces(Blanc);
	std::vector<Piece*> pieceRestantesNoires = retrouverToutesLesPieces(Noir);
	
	/*for (int i = 0; i < piecesRestantesBlanches; i++) {
		for (int j=0; j)
		piecesRestantesBlanches[i]->m_position+
	}*/
	
	


	
	

	
}