#include "Piece.h"
#include "Roi.h"
#include "Position.h"
#include "Tour.h"
#include "Pion.h"
#include "board.h"

#include "Deplacement.h"



int main() {
	try {
		DeplacementPieces::Roi* roi1 = new DeplacementPieces::Roi(Blanc);
		DeplacementPieces::Roi* roi2 = new DeplacementPieces::Roi(Blanc);
	}
	catch (std::runtime_error& error) {
		std::cout << error.what() << std::endl;
	}

}
