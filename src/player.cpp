/*
 * File: player.cpp
 */

#include "player.h"

Player::Player()
{
}

Player::Player( char * uuid, char * name, player_action_t action )
{
    memcpy( m_uuid, uuid, 32 );
    strncpy( m_name, name, 32 );
    m_action = action;
}

char * Player::uuid() { return m_uuid; }

char * Player::name() { return m_name; }

player_action_t Player::action() { return m_action; }

/*
 * Function: get_hand
 *
 * Gets one of the player's hands.
 *
 * @param index: hand to get from hand array
 *
 * returns: hand
 */
Hand * Player::hand() { return &m_hand; }

void Player::set_action( player_action_t action ) { m_action = action; }

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

