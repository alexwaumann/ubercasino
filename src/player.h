/*
 * File: player.h
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

#include "hand.h"

enum class player_action_t { idle, hit, stand, split, double_down };

std::ostream& operator<<( std::ostream& os, const player_action_t& a );

class Player
{
    public:
        Player();
        Player( char * uuid, char * name, player_action_t action );

        char * uuid();
        char * name();
        player_action_t action();
        Hand * hand();

        void set_action( player_action_t action );

    private:
        char m_uuid[SIZE_OF_UUID];
        char m_name[32];
        player_action_t m_action;
        Hand m_hand;
};

#endif

