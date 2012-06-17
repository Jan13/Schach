/*
 * util.h
 *
 *  Created on: 15.06.2012
 *      Author: jan
 */

#ifndef UTIL_H_
#define UTIL_H_


namespace chess{

	enum Color {WHITE, BLACK};

	enum Status {PLAYER_1, PLAYER_2, DRAW, P1_WON, P2_WON, NO_GAME};

	struct Position{
		int row;
		int line;
	};

	struct Turn{
		Position oldP;
		Position newP;
	};

}// namespace chess


#endif /* UTIL_H_ */
