

#ifndef BOARD_H_
#define BOARD_H_

#include "util.h"

namespace chess {

	class Piece;

    class Board {
    public:
        Board();
        ~Board();
        bool tryMove(Turn t, Color p);
        bool isCheck(Color p);
        bool isCheckMate(Color p);
    private:
        Piece* pieces[8][8];
    };

}


#endif
