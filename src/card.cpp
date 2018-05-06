/*
 * File: card.cpp
 */

#include "card.h"

Card::Card()
{
    m_card.card = card_kind::ace;
    m_card.suite = suite_t::hearts;
    m_card.valid = false;
    m_value = 1;
}

Card::Card( suite_t suit, card_kind rank )
{
    m_card.card = rank;
    m_card.suite = suit;
    m_card.valid = false;
    switch( rank )
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            m_value = rank + 1;
            break;
        case 10:
        case 11:
        case 12:
            m_value = 10;
            break;
        default:
            m_value = 0;
    };

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

int Card::value() const { return m_value; }

