/*
 * File: player.h
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <string>
#include <iostream>
#include "hand_t.h"

#define MAX_HANDS_PER_PLAYER    3

enum class player_action_t { idle, hit, stand, split, double_down };

std::ostream& operator<<( std::ostream& os, const player_action_t& a );

class Player
{
    public:
        Player( std::string uuid, std::string name );
        
        std::string get_uuid();
        std::string get_name();
        player_action_t get_action();
        hand_t get_hand( int index );
        int get_num_hands();

        void set_action( player_action_t action );
        bool add_hand( hand_t hand );

    private:
        std::string uuid;
        std::string name;
        player_action_t action;
        hand_t hands[MAX_HANDS_PER_PLAYER];
        int num_hands;
};

#endif

