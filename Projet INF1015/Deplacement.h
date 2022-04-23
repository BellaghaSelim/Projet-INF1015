#pragma once
#include <vector>
#include "Position.h"
#include "Deplacement.h"

namespace Deplacement {
	using namespace DeplacementPieces;
	const std::vector<DeplacementPieces::Position> deplacementPion{ Position(0,1) };
	const std::vector<DeplacementPieces::Position> deplacementTour{ Position(0,1), Position(0,-1), Position(1,0), Position(-1,0) };
	const std::vector<DeplacementPieces::Position> deplacementRoi{ Position(0,1), Position(0,-1), Position(1,0), Position(-1,0),
	Position(1,1), Position(-1,1), Position(1,-1), Position(-1,-1) };
	const std::vector<DeplacementPieces::Position> deplacementFou{ Position(1,1), Position(-1,1), Position(1,-1), Position(-1,-1) };
	const std::vector<DeplacementPieces::Position> deplacementDame{ Position(1,0), Position(-1,0), Position(0,1), Position(0,-1),
	Position(1,0), Position(1,1), Position(-1,1), Position(1,-1), Position(-1,-1) };
	const std::vector<DeplacementPieces::Position> deplacementCavalier{ Position(2,1), Position(2,-1), Position(-2, 1), Position(-2,-1),
	Position(1,2), Position(-1,2), Position(1,-2), Position(-1,-2) };
 }