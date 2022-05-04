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
        bool verifBouger(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const override;
        bool 
        (int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const override;
    };
}
