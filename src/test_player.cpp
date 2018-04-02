/*
 * File: test_player.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include <iostream>
#include "player.h"

using namespace std;

int main( int argc, char ** argv )
{
    Player player( "1832748273482374832", "Alex" );

    // test constructor
    if( player.get_uuid() != "1832748273482374832" )
        cout << "Error: get_uuid()" << endl
             << "\tExpected: 1832748273482374832" << endl
             << "\tActual  : " << player.get_uuid() << endl;

    if( player.get_name() != "Alex" )
        cout << "Error: get_name()" << endl
             << "\tExpected: Alex" << endl
             << "\tActual  : " << player.get_name() << endl;

    if( player.get_action() != player_action_t::idle )
        cout << "Error: get_action()" << endl
             << "\tExpected: idle" << endl
             << "\tActual  : " << player.get_action() << endl;

    // test getting hand after exception is added

    if( player.get_num_hands() != 0 )
        cout << "Error: get_num_hands()" << endl
             << "\tExpected: 0" << endl
             << "\tActual  : " << player.get_num_hands() << endl;

    // test setting action
    player.set_action( player_action_t::stand );
    if( player.get_action() != player_action_t::stand )
        cout << "Error: get_action()" << endl
             << "\tExpected: stand" << endl
             << "\tActual  : " << player.get_action() << endl;

    // test adding a hand
    hand_t hand;
    card_t* cards;
    hand.add_card( card_t{} );
    hand.add_card( card_t{ suit_t::clubs, face_t::jack } );

    player.add_hand( hand );
    
    if( player.get_num_hands() != 1 )
        cout << "Error: add_hand()" << endl
             << "\tExpected: 1" << endl
             << "\tActual  : " << player.get_num_hands() << endl;

    cards = player.get_hand(0).get_cards();

    if( cards[0].get_suit() != suit_t::hearts && cards[0].get_face() != face_t::ace )
        cout << "Error: add_hand()" << endl
             << "\tExpected: ace of hearts" << endl
             << "\tActual  : " << cards[0].get_face() << " of " << cards[0].get_suit() << endl;

    if( cards[1].get_suit() != suit_t::clubs && cards[1].get_face() != face_t::jack )
        cout << "Error: add_hand()" << endl
             << "\tExpected: jack of clubs" << endl
             << "\tActual  : " << cards[1].get_face() << " of " << cards[1].get_suit() << endl;

    return 0;
}

