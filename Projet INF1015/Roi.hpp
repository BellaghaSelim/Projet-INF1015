#pragma once
#include "Tour.hpp"
#include"Fou.hpp"
#include "chessboard.hpp"
#include "Piece.hpp"

namespace Modele {

    class Roi : public Modele::Piece {
    public:
        Roi() = default;
        Roi(std::string BlanOuNoir, int x, int y);
        ~Roi();
        bool peutSeDeplacer(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> echiquier[8][8]) const override;
        bool prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> [8][8]) const override;
        static void resetCompteurRoi() { compteurRoi = 0; }
    private:
        static int compteurRoi;
    };


}
