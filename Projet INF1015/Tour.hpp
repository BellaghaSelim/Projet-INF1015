#pragma once
#include "chessboard.hpp"
#include "Piece.hpp"
#include "Roi.hpp"
#include "Fou.hpp"

namespace Modele {

    class Tour : public Modele::Piece {
    public:
        Tour() = default;
        Tour(std::string BlanOuNoir, int x, int y);
        ~Tour() = default;
        bool verifBouger(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const override;
        bool prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const override;
    };
}