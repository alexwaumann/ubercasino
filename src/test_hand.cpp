/*
 * File: test_hand_t.cpp
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#include <iostream>
#include "hand.h"

using namespace std;

int main( int argc, char ** argv )
{
    Hand hand;
    
    if( hand.get_points() != 0 )
        cout << "Error: points" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_points() << endl;
    if( hand.get_cards().size() != 0 )
        cout << "Error: cards" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_cards().size() << endl;

    // add ace of hearts to hand
    hand.add_card( Card{} );
    hand.add_card( Card{} );
    hand.add_card( Card{} );
    hand.add_card( Card{ rank_t::eight, suit_t::clubs } );
    if( hand.get_cards().size() != 4 )
        cout << "Error: add_card" << endl
             << "\tExpected: 4" << endl
             << "\tActual: " << hand.get_cards().size() << endl;
    if( hand.get_points() != 21 )
        cout << "Error: get_points" << endl
             << "\tExpected: 21" << endl
             << "\tActual: " << hand.get_points() << endl;
    if( !hand.is_soft() )
        cout << "Error: is_soft" << endl
             << "\tExpected: 1" << endl
             << "\tActual: " << hand.is_soft() << endl;

    // test bust
    if( hand.is_bust() )
        cout << "Error: is_bust" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.is_bust() << endl;

    hand.add_card( Card{ rank_t::eight, suit_t::clubs } );
    hand.add_card( Card{ rank_t::eight, suit_t::clubs } );
    if( !hand.is_bust() )
        cout << "Error: is_bust" << endl
             << "\tExpected: 1" << endl
             << "\tActual: " << hand.is_bust() << endl;

    return 0;
}

