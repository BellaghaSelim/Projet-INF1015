#pragma once
#include "Position.h"
#include "Piece.h"


namespace DeplacementPieces {
	template <typename T>
	class Case {
	public:
		Case(Position position);
		~Case();
		void enleverPiece();
		void ajouterPiece(T piece);
		Piece* getPieceDansCase() const { return m_pieceDansCase; };
		Position getPosition() const { return m_position; };
	private:
		Position m_position;
		T* m_pieceDansCase;
	};
}

