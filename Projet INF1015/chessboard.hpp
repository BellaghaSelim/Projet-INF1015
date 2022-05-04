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
bool verifEchecRoi(std::shared_ptr<Modele::Piece> piece);                                                   
void initialiser();
};

bool echecRoi(int x, int y, std::shared_ptr<Modele::Piece> table[8][8]);
   
}





                   










