/*
 * File: test_hand_t.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include <iostream>
#include "hand_t.h"

using namespace std;

int main( int argc, char ** argv )
{
    hand_t hand;
    
    if( hand.get_num_cards() != 0 )
        cout << "Error: num_cards" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_num_cards() << endl;
    if( hand.get_soft_count() != 0 )
        cout << "Error: soft_count" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_soft_count() << endl;
    if( hand.get_hard_count() != 0 )
        cout << "Error: hard_count" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_hard_count() << endl;
    if( hand.is_soft_hand() )
        cout << "Error: soft_hand" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.is_soft_hand() << endl;

    // add ace of hearts to hand
    hand.add_card( card_t{} );
    if( hand.get_num_cards() != 1 )
        cout << "Error: num_cards" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_num_cards() << endl;
    if( hand.get_soft_count() != 1 )
        cout << "Error: soft_count" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_soft_count() << endl;
    if( hand.get_hard_count() != 11 )
        cout << "Error: hard_count" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.get_hard_count() << endl;
    if( !hand.is_soft_hand() )
        cout << "Error: soft_hand" << endl
             << "\tExpected: 0" << endl
             << "\tActual: " << hand.is_soft_hand() << endl;
    return 0;
}

