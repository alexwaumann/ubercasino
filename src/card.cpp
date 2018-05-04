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

suite_t Card::suit() { return m_card.suite; }

card_kind Card::rank() { return m_card.card; }

bool Card::valid() { return m_card.valid; }

