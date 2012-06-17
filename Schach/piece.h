/*
 * Piece.h
 *
 *  Created on: 09.06.2012
 *      Author: jan
 */

#ifndef PIECE_H_
#define PIECE_H_

#include "controller.h"
#include "util.h"

namespace chess {

    class Piece {
    public:
        Piece(Color);
        //virtual ~Piece();
        Color getColor();
        virtual bool validateMove(Position oldP, Position newP, bool capture);
    protected:
        Color color;
    };
    
    class King : public Piece{
    public:
    	King(Color);
    	virtual bool validateMove(Position oldP, Position newP, bool capture);
    };
    class Queen : public Piece{
    public:
    	Queen(Color);
    	virtual bool validateMove(Position oldP, Position newP, bool capture);
    };
    class Rook : public Piece{
    public:
    	Rook(Color);
    	virtual bool validateMove(Position oldP, Position newP, bool capture);
    };
    class Bishop : public Piece{
    public:
    	Bishop(Color);
    	virtual bool validateMove(Position oldP, Position newP, bool capture);
    };
    class Knight : public Piece{
    public:
    	Knight(Color);
    	virtual bool validateMove(Position oldP, Position newP, bool capture);
    };
    class Pawn : public Piece{
    public:
    	Pawn(Color);
    	virtual bool validateMove(Position oldP, Position newP, bool capture);
    };
}


#endif /* PIECE_H_ */
