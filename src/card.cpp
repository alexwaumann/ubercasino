/*
 * File: card.cpp
 */

#include "card.h"

Card::Card()
{
    m_suit = suit_t::hearts;
    m_rank = rank_t::ace;
}

Card::Card( suit_t suit, rank_t rank )
{
    m_rank = rank;
    m_suit = suit;
}

suit_t Card::suit() const { return m_suit; }

rank_t Card::rank() const { return m_rank; }

/*
 * Function: ace
 *
 * @returns: true: card is ace
 *           false: otherwise
 */
bool Card::ace() const
{
    if( m_rank == rank_t::ace )
        return true;

    return false;
}

