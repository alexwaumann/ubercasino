/*
 * File: test_card.cpp
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#include <iostream>
#include "card.h"

using namespace std;

void test_constructor( Card card, rank_t rank, suit_t suit, bool face_up );

int main( int argc, char ** argv )
{
    Card ace_of_hearts;
    Card six_of_spades{ rank_t::six, suit_t::spades };
    Card queen_of_diamonds{ rank_t::queen, suit_t::diamonds, true };
    Card card_copy{ queen_of_diamonds };

    // test constructors
    test_constructor( ace_of_hearts, rank_t::ace, suit_t::hearts, false );
    test_constructor( six_of_spades, rank_t::six, suit_t::spades, false );
    test_constructor( queen_of_diamonds, rank_t::queen, suit_t::diamonds, true );
    test_constructor( card_copy, rank_t::queen, suit_t::diamonds, true );

    // test is_ace()
    if( !ace_of_hearts.is_ace() )
        cout << "Error: is_ace()" << endl
             << "\tExpected: 1" << endl
             << "\tActual  : " << ace_of_hearts.is_ace() << endl;

    // test setters
    ace_of_hearts.set_face_up();
    if( !ace_of_hearts.is_face_up() )
        cout << "Error: set_face_up()" << endl
             << "\tExpected: 1" << endl
             << "\tActual  : " << ace_of_hearts.is_face_up() << endl;

    queen_of_diamonds.set_face_down();
    if( queen_of_diamonds.is_face_up() )
        cout << "Error: set_face_down()" << endl
             << "\tExpected: 0" << endl
             << "\tActual  : " << queen_of_diamonds.is_face_up() << endl;

    return 0;
}

void test_constructor( Card card, rank_t rank, suit_t suit, bool face_up )
{
    if( card.get_suit() != suit )
        cout << "Error: unexpected suit" << endl
             << "\tExpected: " << suit << endl
             << "\tActual  : " << card.get_suit() << endl;
    if( card.get_rank() != rank )
        cout << "Error: unexpected rank" << endl
             << "\tExpected: " << rank << endl
             << "\tActual  : " << card.get_rank() << endl;
    if( card.is_face_up() != face_up )
        cout << "Error: unexpected face_up" << endl
             << "\tExpected: " << face_up << endl
             << "\tActual  : " << card.is_face_up() << endl;
}

