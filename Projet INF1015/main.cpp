#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#pragma pop()
#include "chessboard.hpp"
#include"Piece.hpp"

bool presenceRoi(int x, int y, std::shared_ptr<Modele::Piece> echiquier[8][8]) {
    if (echiquier[x][y] != nullptr && echiquier[x][y]->getNom() == 'R') {
        return true;
    }
    return false;
}


