/*
 * File: card.cpp
 */

#include "card.h"

Card::Card( suite_t suit, card_kind rank )
{
    m_card.card = rank;
    m_card.suite = suit;
    m_card.valid = false;
}

Card::Card( suite_t suit, card_kind rank, bool valid )
    : Card( suit, rank )
{
    m_card.valid = valid;
}

suite_t Card::suit() const { return m_card.suite; }

card_kind Card::rank() const { return m_card.card; }

bool Card::valid() const { return m_card.valid; }

/*
 * Function: ace
 *
 * @returns: true: card is ace
 *           false: otherwise
 */
bool Card::ace() const
{
    if( m_card.card == card_kind::ace )
        return true;
    else
        return false;
}

