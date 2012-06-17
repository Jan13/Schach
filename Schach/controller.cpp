/*
 * controller.cpp
 *
 *  Created on: 15.06.2012
 *      Author: jan
 */

#include "controller.h"
#include "board.h"
#include <iostream>

using namespace std;

namespace chess{

	Controller::Controller(PlayerType p1, PlayerType p2){
		gameStatus = NO_GAME;
		switch(p1){
		case HUMAN:
			player1 = new Player_Human(this);
		case COMPUTER:
		case NETWORK:
			cout << "Not yet implemented" << endl;
			break;
		}
	}

	Controller::~Controller(){

	}

	Board* Controller::getBoard(){
		return board;
	}

	void Controller::startGame(){

	}

	void Controller::exit(){

	}


} //namespace chess

