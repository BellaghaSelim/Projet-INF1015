#include "Piece.h"
#include "Roi.h"
#include "Position.h"
#include "Tour.h"
#include "Pion.h"
#include "board.h"

#include "Deplacement.h"



int main() {
	try {
		Modele::Roi* roi1 = new Modele::Roi(Blanc);
		Modele::Roi* roi2 = new Modele::Roi(Blanc);
	}
	catch (std::runtime_error& error) {
		std::cout << error.what() << std::endl;
	}

}
