/*
 * File: card.h
 * Created: 04/01/2018
 * Modified: 04/03/2018
 */

#ifndef __CARD_H__
#define __CARD_H__

#include "face_t.h"
#include "suit_t.h"

class Card
{
    public:
        Card();
        Card( const Card& card );
        Card( face_t face, suit_t suit );
        Card( face_t face, suit_t suit, bool face_up );

        face_t get_face() const;
        suit_t get_suit() const;
        bool is_face_up() const;

        void set_face_up();
        void set_face_down();

    private:
        face_t face;
        suit_t suit;
        bool face_up;
};

#endif

