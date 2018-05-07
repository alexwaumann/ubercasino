/*
 * File: hand.h
 */

#ifndef HAND_H
#define HAND_H

#include "card.h"
#include "interface.h"

class Hand
{
    public:
        Hand();

        int size() const;
        Card card( int index ) const;
        int points() const;
        bool blackjack() const;
        bool bust() const;

        bool add_card( Card card );
        void reset();

    private:
        int m_size;
        int m_points;
        Card m_cards[MAX_CARDS_PER_PLAYER];
};

#endif

