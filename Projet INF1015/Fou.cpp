#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#pragma pop()
#include "Fou.hpp"
using namespace std;


Modele::Fou::Fou(string BlanOuNoir, int x, int y) {
    nomPiece = 'F';
    couleur = BlanOuNoir;
    posX = x;
    posY = y;
}

bool Modele::Fou::verifBouger(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const {
    if (abs(nouvellePosX - posX) == abs(nouvellePosY - posY)) {
        if(table[nouvellePosX][nouvellePosY] == nullptr || couleur != table[nouvellePosX][nouvellePosY]->getCouleur() ){
            if (prendre(nouvellePosX, nouvellePosY, table)) {
                if (echecRoi(nouvellePosX, nouvellePosY, table)) {}
                return true;
            }
        }
    }
    return false;
}

bool Modele::Fou::prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const {
    if (posX > nouvellePosX) {
        if (posY > nouvellePosY) {                              
            for (int i = nouvellePosX + 1; i < posX; i++) {
                if (table[i][i + 1] != nullptr) {
                    return false;
                }
            }
        }
        else if (posY < nouvellePosY) {                         
            for (int i = nouvellePosX + 1; i < posX; i++) {
                if (table[i][6 - i] != nullptr) {
                    return false;
                }
            }
        }
    }
    else if (posX < nouvellePosX) {
        if (posY > nouvellePosY) {                             
            for (int i = posX + 1; i < nouvellePosX; i++) {
                if (table[i][6 - i] != nullptr) {
                    return false;
                }
            }
        }
        else if (posY < nouvellePosY) {                            
            for (int i = posX; i < nouvellePosX - 1; i++) {
                if (table[1 + i][1 + i] != nullptr)
                    return false;
            }
        }
    }
    return true;      
}


