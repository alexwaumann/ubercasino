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

Shoe::Shoe( int test_case )
    : Shoe()
{
    m_type = shoe_t::test;
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
                return Card( suit_t::hearts, rank_t::ace );
                break;
            case 1:
                return Card( suit_t::hearts, rank_t::two );
                break;
            case 2:
                return Card( suit_t::diamonds, rank_t::four );
                break;
            case 3:
                return Card( suit_t::diamonds, rank_t::five );
                break;
            case 4:
                return Card( suit_t::clubs, rank_t::seven );
                break;
            case 5:
                return Card( suit_t::clubs, rank_t::eight );
                break;
            case 6:
                return Card( suit_t::spades, rank_t::ten );
                break;
            case 7:
                return Card( suit_t::spades, rank_t::jack );
                break;
            case 8:
                return Card( suit_t::hearts, rank_t::queen );
                break;
            default:
                return Card( suit_t::hearts, rank_t::king );
                break;
        }

    // otherwise return a random card (infinite deck)
    suit_t random_suit = (suit_t) (rand() % 4);         // 0 -3
    rank_t random_rank = (rank_t) (rand() % 13);    // 0 - 12
    return Card( random_suit, random_rank );
}

void Shoe::shuffle()
{
    // shuffles deck (used for unimplemented 8deck shoe)
}

void Shoe::reset()
{
    // reset's deck if not enough cards for a whole round
}

