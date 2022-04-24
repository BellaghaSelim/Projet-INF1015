#include "Piece.h"
#include "Position.h"

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

namespace EspaceDeJeu {
	class Board {
	public:
		Board();
		~Board();
		bool verifierEchec();
		DeplacementPieces::Piece* board_[7][7];
		DeplacementPieces::Position retrouverPosRoi(Couleur couleur);
		std::vector<DeplacementPieces::Piece*> retrouverToutesLesPieces(Couleur couleur);
		//void ajouterPiece(Board board, DeplacementPieces::Piece* piece, DeplacementPieces::Position position);
		



	private:
		int taille_ = 64;
		int nombreLignes_ = 8;
		int nombreColonnes_ = 8;
		
	};
}