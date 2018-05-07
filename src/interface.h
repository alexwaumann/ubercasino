#ifndef INTERFACE_H
#define INTERFACE_H

#include "ccpp_ubercasino.h"
//#include "player.h"
//#include "dealer.h"
//#include "game.h"

/*
 * Interface for sending/receiving data via opensplice to
 * pretend like it doesn't exist (all rainbows on my side).
 */

const int SIZE_OF_UUID = (int) UberCasino::SIZE_OF_UUID;
const int MAX_PLAYERS_IN_A_GAME = (int) UberCasino::MAX_PLAYERS_IN_A_GAME;
const int MAX_CARDS_PER_PLAYER = (int) UberCasino::MAX_CARDS_PER_PLAYER;

void on_data_received( UberCasino::Player data );

void publish();

#endif

