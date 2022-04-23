#include "Piece.h"
#include "Roi.h"
#include "Position.h"
#include "Tour.h"
#include "Pion.h"
#include "board.h"
#include "Case.h"
#include "Deplacement.h"

using namespace Deplacement;

int main(){
	
	Board* board = new Board();
	Pion* pion = new Pion(Couleur::Blanc);
	Position* pos = new Position(1, 1);
	//board->ajouterPiece<Pion>(*pion, *pos);
	auto pieceRecherchée = board->retrouverToutesLesPieces(Couleur::Blanc);
	std::cout << "b";
	/*Board<Piece> b();

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			b.board_[i][j] = Case(i,j)
		}
	}
	Roi roi;
	roi.deplacement(Position(1, 1));
	std::cout << "ii" << std::endl;
	roi.deplacement(Position(1, 0));
	std::cout << "ii" << std::endl;
	roi.deplacement(Position(0, 2));
	std::cout << "ii" << std::endl;
	roi.deplacement(Position(0, 2));
	std::cout << "ii" << std::endl;
	roi.deplacement(Position(0, 1));
	std::cout << "ii" << std::endl;
	roi.deplacement(Position(0, 2));
	std::cout << "ii" << std::endl;
	roi.deplacement(Position(0, 1));*/
}