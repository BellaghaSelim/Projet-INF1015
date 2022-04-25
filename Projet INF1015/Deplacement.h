#pragma once
#include <vector>
#include "Position.h"
#include "Deplacement.h"

namespace Modele {
	
	const std::vector<Modele::Position> deplacementPion{ Position(0,1) };
	const std::vector<Modele::Position> deplacementTour{ Position(0,1), Position(0,-1), Position(1,0), Position(-1,0) };
	const std::vector<Modele::Position> deplacementRoi{ Position(0,1), Position(0,-1), Position(1,0), Position(-1,0),
	Position(1,1), Position(-1,1), Position(1,-1), Position(-1,-1) };
	const std::vector<Modele::Position> deplacementFou{ Position(1,1), Position(-1,1), Position(1,-1), Position(-1,-1) };
	const std::vector<Modele::Position> deplacementDame{ Position(1,0), Position(-1,0), Position(0,1), Position(0,-1),
	Position(1,0), Position(1,1), Position(-1,1), Position(1,-1), Position(-1,-1) };
	const std::vector<Modele::Position> deplacementCavalier{ Position(2,1), Position(2,-1), Position(-2, 1), Position(-2,-1),
	Position(1,2), Position(-1,2), Position(1,-2), Position(-1,-2) };
 }