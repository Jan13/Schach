/*
 * controller.h
 *
 *  Created on: 09.06.2012
 *      Author: jan
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "player.h"
#include "util.h"
#include "board.h"

namespace chess {

    class Controller {
    public:
        Controller(PlayerType p1, PlayerType p2);
        ~Controller();
        Board* getBoard();
        void startGame();
        void exit();
    private:
        Board* board;
        Player player1;
        Player player2;
        Color aktivePlayer; 
        Status gameStatus;
        void endGame();
    };
}




#endif /* CONTROLLER_H_ */
