#pragma warning(push, 0) 
#pragma pop()
#include "Tour.hpp"

Modele::Tour::Tour(std::string BlanOuNoir, int x, int y) {
    nomPiece = 'T';
    couleur = BlanOuNoir;
    posX = x;
    posY = y;
}

bool Modele::Tour::verifBouger(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const {
    if (posX == nouvellePosX || posY == nouvellePosY) {
        if (table[nouvellePosX][nouvellePosY] == nullptr || couleur != table[nouvellePosX][nouvellePosY]->getCouleur()) {
            if (prendre(nouvellePosX, nouvellePosY, table)) {
                if(echecRoi(nouvellePosX, nouvellePosY, table)){}
                return true;
            }
        }  
    }
    return false;
}

bool validerPassageX(const int petit, int const  grand, int posVoulu, std::shared_ptr<Modele::Piece> table[8][8]) { 
    for (int i = petit + 1; i < grand; i++) {
        if (table[posVoulu][i] != nullptr)
            return false;
    }    
    return true;
}
bool validerPassageY(const int petit, int const  grand, int posVoulu, std::shared_ptr<Modele::Piece> table[8][8]) {
    for (int i = petit + 1; i < grand; i++) {
        if (table[i][posVoulu] != nullptr)
            return false;
    }
    return true;
}

bool Modele::Tour::prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const {
    if ((posX == nouvellePosX) && (posY < nouvellePosY)) {
        if (validerPassageX(posY, nouvellePosY, posX, table)) {
                if (echecRoi(posX, nouvellePosY, table)) {}
                return true;
            }
                
        }
    else if ((posX == nouvellePosX) && (posY > nouvellePosY)) {
            if (validerPassageX(nouvellePosY, posY, posX, table)) {
                if (echecRoi(posX, nouvellePosY, table)) {}
                return true;
            }
        }
    else if ((posY == nouvellePosY) && (posX < nouvellePosX)) {
            if (validerPassageY(posX, nouvellePosX, posY, table)) {
                if (echecRoi(nouvellePosX, posY, table)) {}
                return true;
            }
        }

    else if ((posY == nouvellePosY) && (posX > nouvellePosX)) {
        if (validerPassageY(nouvellePosX, posX, posY, table)) {
            if (echecRoi(nouvellePosX, posY, table)) {}
            return true;
            }
        }
        
    return false;
}
    




