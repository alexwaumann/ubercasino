/*
 * File: card_t.h
 * Created: 04/01/2018
 * Modified: 04/03/2018
 */

#ifndef __CARD_T_H__
#define __CARD_T_H__

#include "face_t.h"
#include "suit_t.h"

class card_t
{
    public:
        card_t();
        card_t( face_t face, suit_t suit );
        card_t( face_t face, suit_t suit, bool face_up );

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

