#include "board.h"
#include "Piece.h"
#include "Roi.h"
#include <typeinfo>


DeplacementPieces::Board::Board() {

	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			board_[i][j] = nullptr;
		}
	}

};


DeplacementPieces::Board::~Board() {
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			board_[i][j] = nullptr;
			delete board_;
		}
	}
};

//template <class T>
//void Board::ajouterPiece(T piece, Position position) {
//	//Piece* ptr_derivee = dynamic_cast<Piece*>(piece);
//	//board_[position.getPosition_x()][position.getPosition_y()] = nullptr;
//};

DeplacementPieces::Position DeplacementPieces::Board::retrouverPosRoi(Couleur couleur) {
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			if (typeid(board_[i][j]) == typeid(Roi) && (board_[i][j]->getCouleur()) == couleur) {
				return board_[i][j]->getPosition();
			}
			else std::cout << "Cette pièce n'est pas en jeu\n"; // pas de roi => partie finie
		}
	}
};

std::vector<DeplacementPieces::Piece*> DeplacementPieces::Board::retrouverToutesLesPieces(Couleur couleur) {
	std::vector<Piece*> vecteurDePieces = {};
	for (int i = 0; i < nombreLignes_; i++) {
		for (int j = 0; j < nombreColonnes_; j++) {
			if (board_[i][j] != nullptr && board_[i][j]->getCouleur() == couleur) {
				vecteurDePieces.push_back(board_[i][j]);
			}
		}
	}
	return vecteurDePieces;
};

bool DeplacementPieces::Board::verifierEchec(){
	Position posRoiBlanc = retrouverPosRoi(Couleur::Blanc);
	Position posRoiNoir  = retrouverPosRoi(Couleur::Noir);
	std::vector<Piece*> piecesRestantesBlanches = retrouverToutesLesPieces(Couleur::Blanc);
	std::vector<Piece*> pieceRestantesNoires = retrouverToutesLesPieces(Couleur::Noir);
	
	/*for (int i = 0; i < piecesRestantesBlanches; i++) {
		for (int j=0; j)
		piecesRestantesBlanches[i]->m_position+
	}*/
	
	


	
	

	return true;
}