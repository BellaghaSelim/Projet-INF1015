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
if (piece->verifBouger(positionX, positionY, echiquier)) {
            int x = piece->getPosX();
            int y = piece->getPosY();
            echiquier[positionX][positionY] = piece;
            echiquier[piece->getPosX()][piece->getPosY()] = nullptr;
            piece->setPosition(positionX, positionY);
            if (verifEchecRoi(piece))
                return true;
            else {
                echiquier[x][y] = piece;
                echiquier[positionX][positionY] = nullptr;
                piece->setPosition(x, y);
            }
        }
        return false;
    }

    bool Modele::Echiquier::verifEchecRoi(std::shared_ptr<Piece> piece) {
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
                    if (echiquier[i][j]->verifBouger(x, y, echiquier) && piece->getNom() != 'R')
                        return false;
                }
            }
        }
        return true;
    }


    bool echecRoi(int x, int y, std::shared_ptr<Modele::Piece> table[8][8]) {
        if (table[x][y] != nullptr && table[x][y]->getNom() == 'R') {
            std::cout << "Echec du roi " << std::endl;
            return true;
        }
        return false;
    }
}









































