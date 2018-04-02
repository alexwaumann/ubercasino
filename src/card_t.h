/*
 * File: card_t.h
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#ifndef __CARD_T_H__
#define __CARD_T_H__

#include <string>
#include <iostream>

enum class suit_t { hearts, diamonds, clubs, spades };
enum class face_t { ace, two, three, four, five, six, seven, eight,
    nine, ten, jack, queen, king };

std::ostream& operator<<( std::ostream&, const suit_t& s );
std::ostream& operator<<( std::ostream&, const face_t f );

class card_t
{
    public:
        // constructors
        card_t();
        card_t( suit_t suit, face_t face );
        card_t( suit_t suit, face_t face, bool face_up );

        // getters
        suit_t get_suit();
        face_t get_face();
        int get_value();
        bool is_face_up();

        // setters
        void set_face_up();
        void set_face_down();

        // helper functions
        static std::string suit_to_string( suit_t suit );
        static std::string face_to_string( face_t face );

    private:
        suit_t suit;
        face_t face;
        int value;
        bool face_up;

        void set_value();
};

#endif

