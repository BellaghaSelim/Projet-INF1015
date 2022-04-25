#pragma once
#include "Position.h"
#include "Piece.h"

namespace DeplacementPieces {
	class TempPosition {
	public:
		TempPosition(DeplacementPieces::Piece& piece, DeplacementPieces::Position posTemp);
		~TempPosition();

	private:
		DeplacementPieces::Piece piece_;
	};
}
