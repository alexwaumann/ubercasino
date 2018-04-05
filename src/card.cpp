/*
 * File: card.cpp
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#include "card.h"

Card::Card()
{
    this->rank = rank_t::ace;
    this->suit = suit_t::hearts;
    this->face_up = false;
}

Card::Card( const Card& card )
{
    this->rank = card.rank;
    this->suit = card.suit;
    this->face_up = card.face_up;
}

Card::Card( rank_t rank, suit_t suit )
{
    this->rank = rank;
    this->suit = suit;
    this->face_up = false;
}

Card::Card( rank_t rank, suit_t suit, bool face_up )
{
    this->rank = rank;
    this->suit = suit;
    this->face_up = face_up;
}

/*
 * Function: get_rank
 *
 * returns: rank of the card
 */
rank_t Card::get_rank() const { return this->rank; }

/*
 * Function: get_suit
 *
 * returns: suit of the card
 */
suit_t Card::get_suit() const { return this->suit; }

/*
 * Function: is_face_up
 *
 * returns: true if card is facing up
 *          false otherwise
 */
bool Card::is_face_up() const { return this->face_up; }

/*
 * Function: is_face_up
 *
 * returns: true if card is facing up
 *          false otherwise
 */
bool Card::is_ace() const { return this->rank == rank_t::ace; }

/*
 * Function: set_face_up
 *
 * Sets the card to be facing up
 */
void Card::set_face_up() { this->face_up = true; }

/*
 * Function: set_face_down
 *
 * Sets the card to be facing down
 */
void Card::set_face_down() { this->face_up = false; }

