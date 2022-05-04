#pragma once
#include <string>
#include<memory>


namespace Modele {
    class Piece {
    public:
        Piece() = default;
        virtual ~Piece() = default;
        virtual bool verifBouger(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const = 0;         
        virtual bool prendre(int nouvellePosX, int nouvellePosY, std::shared_ptr<Piece> table[8][8]) const = 0;             
        int getPosX()const { return posX; }
        void setPosition(int nouvelleValeurX, int nouvelleValeurY) { posX = nouvelleValeurX; posY = nouvelleValeurY; }      
        int getPosY()const { return posY; }                                                                                 
        char getNom() const { return nomPiece; }                                                                            
        std::string getCouleur() const { return couleur; }
    protected:
        int posX;
        int posY;
        std::string  couleur;
        char nomPiece;
    };
}