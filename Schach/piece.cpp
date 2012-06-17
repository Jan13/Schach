

#include "piece.h"
#include "controller.h"
#include "util.h"
#include <cstdlib>

namespace chess {

    Piece::Piece(Color c){
        color = c;
    }
    
    Color Piece::getColor(){
        return color;
    }
    
    bool King::validateMove(Position oldP, Position newP, bool capture){
        if(abs(newP.line-oldP.line)>1) return false;
        if(abs(newP.row-oldP.row)>1) return false;
        return true;
    }
    
    bool Queen::validateMove(Position oldP, Position newP, bool capture){
        if(newP.line==oldP.line || newP.row==oldP.row){
            return true;
        }else{
            int dRow = abs(newP.row-oldP.row);
            int dLine = abs(newP.line-oldP.line);
            if(dRow-dLine==0)return true;
        }
        return false;
    }
    
    bool Rook::validateMove(Position oldP, Position newP, bool capture){
        if(newP.line==oldP.line || newP.row==oldP.row){
            return true;
        } else {
            return false;
        }
    }
    
    bool Bishop::validateMove(Position oldP, Position newP, bool capture){
        int dRow = abs(newP.row - oldP.row);
        int dLine = abs(newP.line - oldP.line);
        if (dRow - dLine == 0)return true;
        return false;
    }
    
    bool Knight::validateMove(Position oldP, Position newP, bool capture){
        int dRow = abs(newP.row - oldP.row);
        int dLine = abs(newP.line - oldP.line);
        if ((dRow == 1 && dLine == 2) || (dRow == 2 && dLine == 1)) return true;
        return false;
    }
    
    bool Pawn::validateMove(Position oldP, Position newP, bool capture){
        if(newP.line != oldP.line + (color==WHITE ? -1 : 1)) return false;
        if(capture){
            if(abs(newP.row-oldP.row)==1)return true;
            return false;
        }else{
            if(abs(newP.row-oldP.row)==0)return true;
            return false;
        }
    }

    Pawn::Pawn(Color c):
    		Piece(c){}
    Knight::Knight(Color c):
    		Piece(c){}
    Bishop::Bishop(Color c):
    		Piece(c){}
    Rook::Rook(Color c):
    		Piece(c){}
    Queen::Queen(Color c):
    		Piece(c){}
    King::King(Color c):
    		Piece(c){}

}
