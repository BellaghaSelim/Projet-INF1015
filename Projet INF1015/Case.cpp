#include "Case.h"

template <typename T>
DeplacementPieces::Case<T>::Case(Position position) : m_position(position){

};

template <typename T>
DeplacementPieces::Case<T>::~Case() {

};

template <typename T>
void DeplacementPieces::Case<T>::enleverPiece() {
	m_pieceDansCase = nullptr;
};

template <typename T>
void DeplacementPieces::Case<T>::ajouterPiece(T piece) {
	m_pieceDansCase = &piece;
};