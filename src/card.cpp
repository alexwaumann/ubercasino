/*
 * File: card.cpp
 */

#include "card.h"

card::card( suite_t suit, card_kind rank )
{
    this->m_card.card = rank;
    this->m_card.suite = suit;
    this->m_card.valid = false;
}

card::card( suite_t suit, card_kind rank, bool valid )
    : card( suit, rank )
{
    this->m_card.valid = valid;
}

suite_t card::suit() { return m_card.suite; }

card_kind card::rank() { return m_card.card; }

bool card::valid() { return m_card.valid; }

