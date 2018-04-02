/*
 * File: hand_t.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include "hand_t.h"

hand_t::hand_t()
{
    this->num_cards = 0;
    this->soft_count = 0;
    this->hard_count = 0;
    this->soft_hand = false;
}

card_t* hand_t::get_cards() { return this->cards; }

int hand_t::get_num_cards() { return this->num_cards; }

int hand_t::get_soft_count() { return this->soft_count; }

int hand_t::get_hard_count() { return this->hard_count; }

bool hand_t::is_soft_hand() { return this->soft_hand; }

/*
 * Function: add_card
 *
 * Adds a card to the hand if there is room for one. This will also
 * update the soft/hard counts for the hand and mark the hand as a
 * soft hand if an "ace" is added.
 *
 * @param card: card to be added to hand
 *
 * returns: true if successfully adds card
 *          false if unsuccessful
 */
bool hand_t::add_card( card_t card )
{
    // check if we have room for another card
    if( num_cards == MAX_CARDS_PER_HAND )
        return false;

    // check to see if soft_hand
    if( card.get_face() == face_t::ace )
    {
        this->soft_hand = true;
        this->soft_count += 1;
        this->hard_count += 11;
    }
    else
    {
        this->soft_count += card.get_value();
        this->hard_count += card.get_value();
    }

    cards[num_cards++] = card;
    return true;
}
