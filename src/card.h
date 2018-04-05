/*
 * File: card.h
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#ifndef __CARD_H__
#define __CARD_H__

#include "rank_t.h"
#include "suit_t.h"

class Card
{
    public:
        Card();
        Card( const Card& card );
        Card( rank_t rank, suit_t suit );
        Card( rank_t rank, suit_t suit, bool face_up );

        rank_t get_rank() const;
        suit_t get_suit() const;
        bool is_face_up() const;
        bool is_ace() const;

        void set_face_up();
        void set_face_down();

    private:
        rank_t rank;
        suit_t suit;
        bool face_up;
};

#endif

