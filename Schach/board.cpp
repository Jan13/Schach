


#include "board.h"
#include "controller.h"
#include "piece.h"

namespace chess {

    Board::Board() {
        Piece* pieces[8][8];
        
        pieces[0][0]=new Rook(WHITE);
        pieces[1][0]=new Knight(WHITE);
        pieces[2][0]=new Bishop(WHITE);
        pieces[3][0]=new Queen(WHITE);
        pieces[4][0]=new King(WHITE);
        pieces[5][0]=new Bishop(WHITE);
        pieces[6][0]=new Knight(WHITE);
        pieces[7][0]=new Rook(WHITE);
        
        for(int i=0; i<8; i++){
            pieces[i][1] = new Pawn(WHITE);
            pieces[i][6] = new Pawn(BLACK);
        }
        
        pieces[0][7]=new Rook(BLACK);
        pieces[1][7]=new Knight(BLACK);
        pieces[2][7]=new Bishop(BLACK);
        pieces[3][7]=new Queen(BLACK);
        pieces[4][7]=new King(BLACK);
        pieces[5][7]=new Bishop(BLACK);
        pieces[6][7]=new Knight(BLACK);
        pieces[7][7]=new Rook(BLACK);
    };

    Board::~Board() {
        delete pieces;
    };

    bool Board::tryMove(Turn t, Color p) {
        if(t.newP.line == t.oldP.line && t.newP.row == t.oldP.row) return false;
        Piece* target = pieces[t.newP.row][t.newP.line];
        bool capture = false;
        if(target != 0){
            if (target->getColor() == p) return false;
            capture = true;
        }
        Piece* aktivePiece = pieces[t.oldP.row][t.oldP.line];
        bool move = aktivePiece->validateMove(t.oldP, t.newP, capture);
        if(!move) return false;
        pieces[t.newP.row][t.newP.line]=pieces[t.oldP.row][t.oldP.line];
        pieces[t.oldP.row][t.oldP.line]=0;
        delete target;
        return true;
    };

    bool Board::isCheck(Color p) {
    	return false;
    };

    bool Board::isCheckMate(Color p) {
    	return false;
    };

}
