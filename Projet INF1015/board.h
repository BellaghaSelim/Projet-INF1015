#include "Piece.h"
#include "Position.h"
#include <array>
#include"Couleur.h"


/*
+------------+-----+-----+-----+-----+-----+-----+------------+
| Case (0,0) | ... | ... | ... | ... | ... | ... | Case (0,7) |
+------------+-----+-----+-----+-----+-----+-----+------------+
| ...        | ... |     |     |     |     |     |            |
+------------+-----+-----+-----+-----+-----+-----+------------+
| ...        |     | ... |     |     |     |     |            |
+------------+-----+-----+-----+-----+-----+-----+------------+
| ...        |     |     | ... |     |     |     |            |
+------------+-----+-----+-----+-----+-----+-----+------------+
| ...        |     |     |     | ... |     |     |            |
+------------+-----+-----+-----+-----+-----+-----+------------+
| ...        |     |     |     |     | ... |     |            |
+------------+-----+-----+-----+-----+-----+-----+------------+
| ...        |     |     |     |     |     | ... |            |
+------------+-----+-----+-----+-----+-----+-----+------------+
| Case (7,0) |     |     |     |     |     |     | Case (7,7) |
+------------+-----+-----+-----+-----+-----+-----+------------+
*/

namespace Modele {
	class Board {
	public:
		Board();
		~Board();
		bool verifierEchec();
		Piece* board_[7][7];
		Modele::Position retrouverPosRoi(Couleur::Couleur couleur);
		Piece* retrouverToutesLesPieces(Couleur::Couleur couleur);
		//void ajouterPiece(Board board, Modele::Piece* piece, Modele::Position position);
		int taille_ = 64;
		int nombreLignes_ = 8;
		int nombreColonnes_ = 8;
		//les attributs seront mis plus tard en private
		
	};
}