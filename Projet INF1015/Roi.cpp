#pragma warning(push, 0) // Sinon Qt fait des avertissements à /W4.
#pragma pop()
#include "Roi.hpp"



 int Modele::Roi::compteurRoi = 0;

Modele::Roi::~Roi() {
   --compteurRoi;
}

Modele::Roi::Roi(std::string BlancOuNoir, int x, int y) {
    nomPiece = 'R';
    couleur = BlancOuNoir;
    posX = x;
    posY = y;
    ++compteurRoi;
   
    
    
}

bool Modele::Roi::peutSeDeplacer(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const {
    if ((abs(posX - nouvellePosX) == 1 || abs(posX - nouvellePosX) == 0) && (abs(posY - nouvellePosY) == 1 || abs(posY - nouvellePosY) == 0)) {
        if (prendre(nouvellePosX, nouvellePosY, echiquier) || echiquier[nouvellePosX][nouvellePosY] == nullptr) {
            if(presenceRoi(nouvellePosX, nouvellePosY, echiquier)){}
            return true;
        }
    }
    return false;
}



bool  Modele::Roi::prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr <Piece> echiquier[8][8]) const{
    if (echiquier[nouvellePosX][nouvellePosY]!= nullptr && couleur!= echiquier[nouvellePosX][nouvellePosY]->getCouleur())
        return  true;
    return  false;
}




