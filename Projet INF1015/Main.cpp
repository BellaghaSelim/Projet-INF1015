#include "Piece.h"
#include "Roi.h"
#include "Position.h"
#include "Tour.h"
#include "Pion.h"
#include "board.h"
#include "Case.h"
#include "Deplacement.h"

using namespace Deplacement;

int main() {
	try {
		DeplacementPieces::Roi* roi1 = new DeplacementPieces::Roi();
		DeplacementPieces::Roi* roi2 = new DeplacementPieces::Roi();
		DeplacementPieces::Roi* roi3 = new DeplacementPieces::Roi();
	}
	catch (std::runtime_error& error) {
		std::cout << error.what() << std::endl;
	}

}