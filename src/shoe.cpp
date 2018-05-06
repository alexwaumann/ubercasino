/*
 * File: shoe.cpp
 */

#include <cstdlib>
#include <ctime>
#include "shoe.h"

Shoe::Shoe()
{
    srand( time( NULL ) );
    m_type = shoe_t::infinite;
}

Shoe::Shoe( shoe_t type, int test_case )
    : Shoe()
{
    m_type = type;
    m_test_case = test_case;
}

shoe_t Shoe::type() const { return m_type; }

int Shoe::test_case() const { return m_test_case; }

Card Shoe::draw_card()
{
    if( m_type == shoe_t::test )
        switch( m_test_case )
        {
            case 0:
                return Card( UberCasino::suite_t::hearts, UberCasino::card_kind::ace );
                break;
            case 1:
                return Card( UberCasino::suite_t::hearts, UberCasino::card_kind::two );
                break;
            case 2:
                return Card( UberCasino::suite_t::diamonds, UberCasino::card_kind::four );
                break;
            case 3:
                return Card( UberCasino::suite_t::diamonds, UberCasino::card_kind::five );
                break;
            case 4:
                return Card( UberCasino::suite_t::clubs, UberCasino::card_kind::seven );
                break;
            case 5:
                return Card( UberCasino::suite_t::clubs, UberCasino::card_kind::eight );
                break;
            case 6:
                return Card( UberCasino::suite_t::spades, UberCasino::card_kind::ten );
                break;
            case 7:
                return Card( UberCasino::suite_t::spades, UberCasino::card_kind::jack );
                break;
            case 8:
                return Card( UberCasino::suite_t::hearts, UberCasino::card_kind::queen );
                break;
            default:
                return Card( UberCasino::suite_t::hearts, UberCasino::card_kind::king );
                break;
        }

    UberCasino::suite_t random_suit = (UberCasino::suite_t) (rand() % 4);         // 0 -3
    UberCasino::card_kind random_rank = (UberCasino::card_kind) (rand() % 13);    // 0 - 12
    return Card( random_suit, random_rank );
}

void Shoe::shuffle()
{
    // shuffles deck
}

void Shoe::reset()
{
    // reset's deck if not enough cards for a whole round
}

