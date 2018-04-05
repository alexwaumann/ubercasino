/*
 * File: hand.h
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#ifndef __HAND_H__
#define __HAND_H__

#include "card.h"
#include <vector>

class Hand
{
    public:
        Hand();

        std::vector<Card> get_cards() const;
        int get_points() const;
        bool is_soft() const;
        bool is_bust() const;
        bool is_splittable() const;

        void add_card( Card card );
        Hand split();

    private:
        std::vector<Card> cards;
        int points;
};

#endif

