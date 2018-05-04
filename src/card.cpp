/*
 * File: card.cpp
 */

#include "card.h"

Card::Card( suite_t suit, card_kind rank )
{
    this->m_card.card = rank;
    this->m_card.suite = suit;
    this->m_card.valid = false;
}

Card::Card( suite_t suit, card_kind rank, bool valid )
    : Card( suit, rank )
{
    this->m_card.valid = valid;
}

suite_t Card::suit() { return m_card.suite; }

card_kind Card::rank() { return m_card.card; }

bool Card::valid() { return m_card.valid; }

