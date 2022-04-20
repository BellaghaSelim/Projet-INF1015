#include "Piece.h"
#include "Position.h"
namespace EspaceDeJeu {
	class Board {
	public:
		Board();
		~Board();
		void initialiserPiece(int ligne, int colonne, ActeursDuJeu::Piece* piece);
		void reinisitialiserCase(int ligne, int colonne);
		bool verifierEchec();
		Position retrouverPosRoi(ActeursDuJeu::Couleur couleur);
		std::vector<ActeursDuJeu::Piece*> retrouverToutesLesPieces(ActeursDuJeu::Couleur couleur);



	private:
		int taille_ = 64;
		int nombreLignes_ = 8;
		int nombreColonnes_ = 8;
		ActeursDuJeu::Piece* board_[8][8];
	}
	;
};