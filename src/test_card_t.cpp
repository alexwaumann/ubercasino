/*
 * File: test_card_t.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include <iostream>
#include "card_t.h"

using namespace std;

void test_constructor( card_t card, suit_t suit, face_t face, int value, bool face_up );

int main( int argc, char ** argv )
{
    card_t ace_of_hearts;
    card_t six_of_spades{ suit_t::spades, face_t::six };
    card_t queen_of_diamonds{ suit_t::diamonds, face_t::queen, true };

    test_constructor( ace_of_hearts, suit_t::hearts, face_t::ace, 1, false );
    test_constructor( six_of_spades, suit_t::spades, face_t::six, 6, false );
    test_constructor( queen_of_diamonds, suit_t::diamonds, face_t::queen, 10, true );

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

    // test helper functions
    if( card_t::suit_to_string( suit_t::hearts ) != "hearts" )
        cout << "Error: suit_to_string( suit_t suit )" << endl
             << "\tExpected: hearts" << endl
             << "\tActual  : " << card_t::suit_to_string( suit_t::hearts ) << endl;

    if( card_t::face_to_string( face_t::eight ) != "eight" )
        cout << "Error: face_to_string( face_t face )" << endl
             << "\tExpected: eight" << endl
             << "\tActual  : " << card_t::face_to_string( face_t::eight ) << endl;

    return 0;
}

void test_constructor( card_t card, suit_t suit, face_t face, int value, bool face_up )
{
    if( card.get_suit() != suit )
        cout << "Error: unexpected suit" << endl
             << "\tExpected: " << suit << endl
             << "\tActual  : " << card.get_suit() << endl;
    if( card.get_face() != face )
        cout << "Error: unexpected face" << endl
             << "\tExpected: " << face << endl
             << "\tActual  : " << card.get_face() << endl;
    if( card.get_value() != value )
        cout << "Error: unexpected value" << endl
             << "\tExpected: " << value << endl
             << "\tActual  : " << card.get_value() << endl;
    if( card.is_face_up() != face_up )
        cout << "Error: unexpected face_up" << endl
             << "\tExpected: " << face_up << endl
             << "\tActual  : " << card.is_face_up() << endl;
}

