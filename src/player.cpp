/*
 * File: player.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include "player.h"

Player::Player( std::string uuid, std::string name )
{
    this->uuid = uuid;
    this->name = name;
    this->action = player_action_t::idle;
    this->num_hands = 0;
}

std::string Player::get_uuid() { return this->uuid; }

std::string Player::get_name() { return this->name; }

player_action_t Player::get_action() { return this->action; }

/*
 * Function: get_hand
 *
 * Gets one of the player's hands.
 *
 * @param index: hand to get from hand array
 *
 * returns: hand
 */
hand_t Player::get_hand( int index )
{
    // TODO: raise exception here
    if( index >= this->num_hands )
        ;
    return hands[index];
}

int Player::get_num_hands() { return this->num_hands; }

void Player::set_action( player_action_t action ) { this->action = action; }

/*
 * Function: add_hand
 *
 * Adds a hand to the player's hand array if there is space
 * for one.
 *
 * @param hand: hand to be added
 *
 * returns: true if successfully adds hand
 *          false if unsuccessful
 */
bool Player::add_hand( hand_t hand )
{
    if( this->num_hands == MAX_HANDS_PER_PLAYER )
        return false;
    
    hands[num_hands++] = hand;
    return true;
}

/*
 * Function: operator<<
 *
 * Operator overloading to make player_action_t work with the <<
 * operator.
 */
std::ostream& operator<<( std::ostream& os, const player_action_t& a )
{
    if( a == player_action_t::idle )
        os << "idle";
    else if( a == player_action_t::hit )
        os << "hit";
    else if( a == player_action_t::stand )
        os << "stand";
    else if( a == player_action_t::split )
        os << "split";
    else if( a == player_action_t::double_down )
        os << "double down";
    else
        os << "unknown";

    return os;
}

