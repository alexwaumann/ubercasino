/*
 * File: hand.h
 */

#ifndef HAND_H
#define HAND_H

#include "card.h"

#define MAX_CARDS_PER_PLAYER 10

class Hand
{
    public:
        Hand();

        int size() const;
        Card * cards();
        int points() const;
        bool blackjack() const;
        bool twenty_one() const;
        bool bust() const;

        bool add_card( Card card );

    private:
        int m_size;
        int m_points;
        Card m_cards[MAX_CARDS_PER_PLAYER];
};

#endif

