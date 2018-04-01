/*
 * File: card_t.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include "card_t.h"

card_t::card_t()
{
    this->suit = suit_t::hearts;
    this->face = face_t::ace;
    this->set_value();
    this->face_up = false;
}

card_t::card_t( suit_t suit, face_t face )
{
    this->suit = suit;
    this->face = face;
    this->set_value();
    this->face_up = false;
}

card_t::card_t( suit_t suit, face_t face, bool face_up )
{
    this->suit = suit;
    this->face = face;
    this->set_value();
    this->face_up = face_up;
}

suit_t card_t::get_suit() { return this->suit; }

face_t card_t::get_face() { return this->face; }

int card_t::get_value() { return this->value; }

bool card_t::is_face_up() { return this->face_up; }

void card_t::set_face_up() { this->face_up = true; }

void card_t::set_face_down() { this->face_up = false; }

void card_t::set_value()
{
    // pointless but want to keep style consistent
    face_t face = this->face;

    if( face == face_t::ace )
        this->value = 1;
    else if( face == face_t::two )
        this->value = 2;
    else if( face == face_t::three )
        this->value = 3;
    else if( face == face_t::four )
        this->value = 4;
    else if( face == face_t::five )
        this->value = 5;
    else if( face == face_t::six )
        this->value = 6;
    else if( face == face_t::seven )
        this->value = 7;
    else if( face == face_t::eight )
        this->value = 8;
    else if( face == face_t::nine )
        this->value = 9;
    else if( face == face_t::ten ||
             face == face_t::jack ||
             face == face_t::queen ||
             face == face_t::king )
        this->value = 10;
    else
        this->value = 0;
}

/*
 * Function: suit_to_string
 *
 * Converts a suit of of type suit_t to a string.
 *
 * @param suit: suit of a card
 *
 * returns: suit in string format
 */
std::string card_t::suit_to_string( suit_t suit )
{
    if( suit == suit_t::hearts )
        return "hearts";
    else if( suit == suit_t::diamonds )
        return "diamonds";
    else if( suit == suit_t::clubs )
        return "clubs";
    else if( suit == suit_t::spades )
        return "spades";
    else
        return "unkown";
}

/*
 * Function: face_to_string
 *
 * Converts a face of of type face_t to a string.
 *
 * @param face: face of a card
 *
 * returns: face in string format
 */
std::string card_t::face_to_string( face_t face )
{
    if( face == face_t::ace )
        return "ace";
    else if( face == face_t::two )
        return "two";
    else if( face == face_t::three )
        return "three";
    else if( face == face_t::four )
        return "four";
    else if( face == face_t::five )
        return "five";
    else if( face == face_t::six )
        return "six";
    else if( face == face_t::seven )
        return "seven";
    else if( face == face_t::eight )
        return "eight";
    else if( face == face_t::nine )
        return "nine";
    else if( face == face_t::ten )
        return "ten";
    else if( face == face_t::jack )
        return "jack";
    else if( face == face_t::queen )
        return "queen";
    else if( face == face_t::king )
        return "king";
    else
        return "unknown";
}

