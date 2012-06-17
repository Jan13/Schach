/*
 * player.cpp
 *
 *  Created on: 15.06.2012
 *      Author: jan
 */

#include "player.h"
#include "util.h"

namespace chess{


	Player::Player(Controller* c){

	}

	bool Player::sendBoard(Board& board){
		return false;
	}

	Turn Player::toggleTurn(int turnID){

	}

	Player_Human::Player_Human(Controller* c){
		Player:Player(c);
	}




} // namespace chess


