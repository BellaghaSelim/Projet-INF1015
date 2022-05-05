#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Piece.hpp"


namespace Modele {

class Echiquier {
public:
Echiquier();
~Echiquier() = default;                                                                         
std::shared_ptr<Modele::Piece> echiquier[8][8];
bool ajouterPiece(int positionX, int positionY, std::shared_ptr<Modele::Piece> piece);                    
void initialiserCoordonnees(int positionX, int positionY, std::shared_ptr<Modele::Piece> piece);
bool miseEnEchec (std::shared_ptr<Modele::Piece> piece);                                                   
void initialiser();

};

bool presenceRoi(int x, int y, std::shared_ptr<Modele::Piece> echiquier[8][8]);
   
}





                   










