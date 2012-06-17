

#ifndef PLAYER_H_
#define PLAYER_H_

#include "util.h"

namespace chess {

	class Controller;
	class Board;

	enum PlayerType {HUMAN, COMPUTER, NETWORK};

    class Player {
    public:
        Player(Controller* c);
        virtual ~Player();
        bool sendBoard(Board& board);
        Turn toggleTurn(int turnID);
    private:
        Board* board;
        Controller* controller;
    };

    class Player_Human : public Player{
    	Player_Human(Controller* c);
    };

} // namespace chess



#endif
