#pragma warning(push, 0) 
#pragma pop()
#include "Tour.hpp"

Modele::Tour::Tour(std::string BlanOuNoir, int x, int y) {
    nomPiece = 'T';
    couleur = BlanOuNoir;
    posX = x;
    posY = y;
}

bool Modele::Tour::peutSeDeplacer(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const {
    if (posX == nouvellePosX || posY == nouvellePosY) {
        if (echiquier[nouvellePosX][nouvellePosY] == nullptr || couleur != echiquier[nouvellePosX][nouvellePosY]->getCouleur()) {
            if (prendre(nouvellePosX, nouvellePosY, echiquier)) {
                if(presenceRoi(nouvellePosX, nouvellePosY,echiquier)){}
                return true;
            }
        }  
    }
    return false;
}

bool pieceDansLeCheminX(const int posInitialeX, int finEchiquierX, int nouvellePosX, std::shared_ptr<Modele::Piece> echiquier[8][8]) { 
    for (int i = posInitialeX + 1; i < finEchiquierX; i++) {
        if (echiquier[nouvellePosX][i] != nullptr)
            return false;
    }    
    return true;
}
bool pieceDansLeCheminY(const int posInitialeY, int  finEchiquierY, int nouvellePosY, std::shared_ptr<Modele::Piece> echiquier[8][8]) {
    for (int i = posInitialeY + 1; i < finEchiquierY; i++) {
        if (echiquier[i][nouvellePosY] != nullptr)
            return false;
    }
    return true;
}

bool Modele::Tour::prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const {
    if ((posX == nouvellePosX) && (posY < nouvellePosY)) {
        if (pieceDansLeCheminX(posY, nouvellePosY, posX, echiquier)) {
                if (presenceRoi(posX, nouvellePosY, echiquier)) {}
                return true;
            }
                
        }
    else if ((posX == nouvellePosX) && (posY > nouvellePosY)) {
            if (pieceDansLeCheminX(nouvellePosY, posY, posX, echiquier)) {
                if (presenceRoi(posX, nouvellePosY, echiquier)) {}
                return true;
            }
        }
    else if ((posY == nouvellePosY) && (posX < nouvellePosX)) {
            if (pieceDansLeCheminY(posX, nouvellePosX, posY, echiquier)) {
                if (presenceRoi(nouvellePosX, posY, echiquier)) {}
                return true;
            }
        }

    else if ((posY == nouvellePosY) && (posX > nouvellePosX)) {
        if (pieceDansLeCheminY(nouvellePosX, posX, posY, echiquier)) {
            if (
                
                (nouvellePosX, posY, echiquier)) {}
            return true;
            }
        }
        
    return false;
}
    




