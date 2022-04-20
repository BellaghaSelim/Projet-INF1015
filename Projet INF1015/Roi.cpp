#include "Roi.h"
#include "Position.h"


int Roi::compteur_ = 0;
Roi::Roi() {
}


Roi::Roi(ActeurDuJeu::Couleur couleur) : public ActeursDuJeu::Piece(ActeursDuJeu::Couleur couleur) { //erreur a fix ici et pour le constructeur ????
	compteur_++;
	if (compteur_ > 2)
		throw std::runtime_error("il y a deja 2 roi");
}

Roi::~Roi() {
	compteur_--;
}

void Roi::deplacement(Position deplacement) {

	if (-1 <= deplacement.getPosition_x() && deplacement.getPosition_x() <= 1 &&
		-1 <= deplacement.getPosition_y() && deplacement.getPosition_y() <= 1) {
		if (verifierDeplacement(deplacement)) {
			m_position + deplacement;
		}
		else {
			std::cout << "Ce deplacement n'est pas possible" << std::endl;
		}
	}
	else {
		std::cout << "Ce deplacement n'est pas possible" << std::endl;
	}

}

bool Roi::verifierDeplacement(Position deplacement) {

	for (int i = 0; i < m_deplacementPossible.size(); i++) {

		if (m_deplacementPossible[i] % deplacement == Position(0, 0)) {
			return true;
		}
	}
	return false;
}

int Roi::getCompteur() { return compteur_; }
