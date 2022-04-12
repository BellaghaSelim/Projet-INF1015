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
}