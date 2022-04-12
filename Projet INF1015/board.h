#include "Piece.h"
#include ""

class Board {
public:
	Board();
	~Board();
	void initialiserPiece(int ligne,int colonne, Piece* piece);
	void reinisitialiserCase(int ligne, int colonne);
	bool verifierEchec(R)
	Position retrouverPiece(Piece* piece);
	

private :
	int taille_ = 64;
	int nombreLignes_ = 8;
	int nombreColonnes_ = 8;
	Piece* board_ [8][8];
};