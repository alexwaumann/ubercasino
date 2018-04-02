/*
 * File: hand_t.h
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#ifndef __HAND_T_H__
#define __HAND_T_H__

#include <string>
#include "card_t.h"

#define MAX_CARDS_PER_HAND      21

class hand_t
{
    public:
        hand_t();

        card_t* get_cards();
        int get_num_cards();
        int get_soft_count();
        int get_hard_count();
        bool is_soft_hand();

        bool add_card( card_t card );

    private:
        card_t cards[MAX_CARDS_PER_HAND];
        int num_cards;
        int soft_count;
        int hard_count;
        bool soft_hand;
};

#endif

