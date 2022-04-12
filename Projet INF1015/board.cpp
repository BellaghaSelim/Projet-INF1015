#include "board.h"
#include "Piece.h"
#include "Roi.h"



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

Position Board::retrouverPiece(Piece* piece, Couleur couleur) {
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			if (board[i][j] == piece && piece->m_couleur == couleur) {
				return board[i][j]->m_position;
			}
			else std::cout << "Cette pièce n'est pas en jeu\n";
		}
	}
}

bool Board::verifierEchec(){
	retrouverPiece(Roi * roi, Couleur couleurRoi);

	
}