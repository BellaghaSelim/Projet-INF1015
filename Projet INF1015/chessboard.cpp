#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#pragma pop()
#include "chessboard.hpp"
#include"Piece.hpp"

namespace Modele {

Echiquier::Echiquier() {
initialiser();
}

void Echiquier::initialiser() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            echiquier[i][j] = nullptr;
        }
    }
}

void Modele::Echiquier::initialiserCoordonnees(int positionX, int positionY, std::shared_ptr<Piece> piece){
echiquier[positionX][positionY] = piece;
}

bool Modele::Echiquier::ajouterPiece(int positionX, int positionY, std::shared_ptr<Piece> piece) {
if (piece->peutSeDeplacer(positionX, positionY, echiquier)) {
            int x = piece->getPosX();
            int y = piece->getPosY();
            echiquier[positionX][positionY] = piece;
            echiquier[piece->getPosX()][piece->getPosY()] = nullptr;
            piece->setPosition(positionX, positionY);
            if (miseEnEchec(piece))
                return true;
            else {
                echiquier[x][y] = piece;
                echiquier[positionX][positionY] = nullptr;
                piece->setPosition(x, y);
            }
        }
        return false;
    }


    bool Modele::Echiquier::miseEnEchec(std::shared_ptr<Piece> piece) {
        int x = 0, y = 0;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (echiquier[i][j] != nullptr && piece->getCouleur() == echiquier[i][j]->getCouleur()) {
                    if (echiquier[i][j]->getNom() == 'R') {
                        x = i;
                        y = j;
                    }
                }
            }
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (echiquier[i][j] != nullptr && piece->getCouleur() != echiquier[i][j]->getCouleur()) {
                    if (echiquier[i][j]->peutSeDeplacer(x, y, echiquier) && piece->getNom() != 'R')
                        return false;
                }
            }
        }
        return true;
    }


    bool presenceRoi(int x, int y, std::shared_ptr<Modele::Piece> echiquier[8][8]) {
        if (echiquier[x][y] != nullptr && echiquier[x][y]->getNom() == 'R') {
            return true;
        }
        return false;
    }
}









































