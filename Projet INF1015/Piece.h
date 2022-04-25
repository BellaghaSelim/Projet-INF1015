#pragma once
#include "Position.h"
#include <iostream>
#include <vector>
#include <string>
#include"board.h"




class Piece {

	public:
		Piece(Couleur::Couleur couleur);
		Piece(std::vector<Modele::Position> deplacementPossible);
		Piece();
		~Piece();
		void deplacement(Modele::Position deplacement);
		virtual bool verifierDeplacement(Modele::Position deplacement);
		Modele::Position getPosition() { return m_position; };
		Couleur::Couleur getCouleur() { return m_couleur; };
		void setPosition(Modele::Board board, Modele::Position position);

	private:
		Modele::Position m_position;
		std::vector<Modele::Position> m_deplacementPossible;
		Couleur::Couleur m_couleur;
	};
