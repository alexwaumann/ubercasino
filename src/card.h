/*
 * File: card.h
 */

#ifndef CARD_H
#define CARD_H

#include "rank_t.h"
#include "suit_t.h"

class Card
{
    public:
        Card();
        Card( suit_t suit, rank_t rank );

        suit_t suit() const;
        rank_t rank() const;
        bool ace() const;

    private:
        suit_t m_suit;
        rank_t m_rank;
        int m_value;
};

#endif

