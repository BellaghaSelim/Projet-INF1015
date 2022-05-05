#pragma once
#include "Roi.hpp"
#include "chessboard.hpp"
#include "Piece.hpp"
#include "Tour.hpp"

namespace Modele {

    class Fou : public Modele::Piece {
    public:
        Fou() = default;
        Fou(std::string BlanOuNoir, int x, int y);
        ~Fou() = default;
        bool peutSeDeplacer(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const override;
 
        bool prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const override;
    };
}
