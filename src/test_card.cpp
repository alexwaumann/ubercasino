/*
 * File: test_card.cpp
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#include <iostream>
#include "card.h"

using namespace std;

void test_constructor( Card card, rank_t rank, suit_t suit );

int main( int argc, char ** argv )
{
    Card ace_of_hearts;
    Card six_of_spades{ suit_t::spades, rank_t::six };
    Card queen_of_diamonds{ suit_t::diamonds, rank_t::queen };
    Card card_copy{ queen_of_diamonds };

    // test constructors
    test_constructor( ace_of_hearts, rank_t::ace, suit_t::hearts );
    test_constructor( six_of_spades, rank_t::six, suit_t::spades );
    test_constructor( queen_of_diamonds, rank_t::queen, suit_t::diamonds );
    test_constructor( card_copy, rank_t::queen, suit_t::diamonds );

    // test is_ace()
    if( !ace_of_hearts.ace() )
        cout << "Error: is_ace()" << endl
             << "\tExpected: 1" << endl
             << "\tActual  : " << ace_of_hearts.ace() << endl;

    return 0;
}

void test_constructor( Card card, rank_t rank, suit_t suit )
{
    if( card.suit() != suit )
        cout << "Error: unexpected suit" << endl
             << "\tExpected: " << suit << endl
             << "\tActual  : " << card.suit() << endl;
    if( card.rank() != rank )
        cout << "Error: unexpected rank" << endl
             << "\tExpected: " << rank << endl
             << "\tActual  : " << card.rank() << endl;
}

