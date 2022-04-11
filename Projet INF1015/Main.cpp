#include "Piece.h"
#include "Pion.h"
#include "Position.h"
#include "Roi.h"
#include "Tour.h"

int main(){
 	Pion* pion = new Pion();
	pion->deplacement(Position(1, 1));
	pion->deplacement(Position(1, 0));
	pion->deplacement(Position(0, 1));
	pion->deplacement(Position(0, 2));
	pion->deplacement(Position(0, 1));
	std::vector<Position> zebi{Position(1, 1), Position(2, 2)};
	std::cout << zebi.size();
}