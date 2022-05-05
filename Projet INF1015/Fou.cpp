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

bool Modele::Fou::peutSeDeplacer(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const {
    if (abs(nouvellePosX - posX) == abs(nouvellePosY - posY)) {
        if(echiquier[nouvellePosX][nouvellePosY] == nullptr || couleur != echiquier[nouvellePosX][nouvellePosY]->getCouleur() ){
            if (prendre(nouvellePosX, nouvellePosY, echiquier)) {
                if (presenceRoi(nouvellePosX, nouvellePosY, echiquier)) {}
                return true;
            }
        }
    }
    return false;
}

bool Modele::Fou::prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const {
    if (posX > nouvellePosX) {
        if (posY > nouvellePosY) {                              
            for (int i = nouvellePosX + 1; i < posX; i++) {
                if (echiquier[i][i + 1] != nullptr) {
                    return false;
                }
            }
        }
        else if (posY < nouvellePosY) {                         
            for (int i = nouvellePosX + 1; i < posX; i++) {
                if (echiquier[i][6 - i] != nullptr) {
                    return false;
                }
            }
        }
    }
    else if (posX < nouvellePosX) {
        if (posY > nouvellePosY) {                             
            for (int i = posX + 1; i < nouvellePosX; i++) {
                if (echiquier[i][6 - i] != nullptr) {
                    return false;
                }
            }
        }
        else if (posY < nouvellePosY) {                            
            for (int i = posX; i < nouvellePosX - 1; i++) {
                if (echiquier[1 + i][1 + i] != nullptr)
                    return false;
            }
        }
    }
    return true;      
}


