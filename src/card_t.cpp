/*
 * File: card_t.cpp
 * Created: 04/01/2018
 * Modified: 04/03/2018
 */

#include "card_t.h"

card_t::card_t()
{
    this->face = face_t::ace;
    this->suit = suit_t::hearts;
    this->face_up = false;
}

card_t::card_t( const card_t& card )
{
    this->face = card.face;
    this->suit = card.suit;
    this->face_up = card.face_up;
}

card_t::card_t( face_t face, suit_t suit )
{
    this->face = face;
    this->suit = suit;
    this->face_up = false;
}

card_t::card_t( face_t face, suit_t suit, bool face_up )
{
    this->face = face;
    this->suit = suit;
    this->face_up = face_up;
}

/*
 * Function: get_face
 *
 * returns: face of the card
 */
face_t card_t::get_face() const { return this->face; }

/*
 * Function: get_suit
 *
 * returns: suit of the card
 */
suit_t card_t::get_suit() const { return this->suit; }

/*
 * Function: is_face_up
 *
 * returns: true if card is facing up
 *          false otherwise
 */
bool card_t::is_face_up() const { return this->face_up; }

/*
 * Function: set_face_up
 *
 * Sets the card to be facing up
 */
void card_t::set_face_up() { this->face_up = true; }

/*
 * Function: set_face_down
 *
 * Sets the card to be facing down
 */
void card_t::set_face_down() { this->face_up = false; }

