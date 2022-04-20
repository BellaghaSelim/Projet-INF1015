#include "Piece.h"
#include "Roi.h"
#include "Position.h"
#include "Tour.h"
#include "Tour.h"
#include "Pion.h"

int main(){
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
	roi.deplacement(Position(0, 1));

	try {
		/*EspaceDeJeu::Board::initialiserPiece();
		initialiserCoordonnees(7, 0, std::make_shared<Roi>("noir", 7, 0));*/
	}

	catch (std::runtime_error& error) {
		std::cout << error.what() << std::endl;
	}
}