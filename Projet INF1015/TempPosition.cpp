#include "TempPosition.h"

DeplacementPieces::TempPosition::TempPosition(DeplacementPieces::Piece& piece, DeplacementPieces::Position posTemp) : piece_(piece) {
	piece_.setPosition(posTemp);
}

DeplacementPieces::TempPosition::~TempPosition() {
	piece_.~Piece();
}