/*
 * File: hand.cpp
 * Created: 04/01/2018
 * Modified: 04/05/2018
 */

#include "hand.h"

Hand::Hand()
{
    this->points = 0;
}

std::vector<Card> Hand::get_cards() const { return this->cards; }

int Hand::get_points() const
{
    int points = this->points;
    int n = this->cards.size();
    for( int i = 0; i < n; ++i )
        if( cards[i].is_ace() )
            if( (points + 10) <= 21 )
                points += 10;

    return points;
}

/*
 * Function: is_soft
 *
 * Checks if there's an ace in hand.
 *
 * returns: true if there is an ace
 *          false otherwise
 */
bool Hand::is_soft() const 
{
    int n = this->cards.size();
    for( int i = 0; i < n; ++i )
        if( cards[i].is_ace() )
            return true;

    return false;
}

bool Hand::is_bust() const
{
    if( this->get_points() > 21 )
        return true;

    return false;
} 

// TODO
bool Hand::is_splittable() const
{
}

/*
 * Function: add_card
 *
 * Adds a card to the hand and updates the hand point count.
 * Note: "ace" is always treated as 1 point here.
 *
 * @param card: card to be added to hand
 */
void Hand::add_card( Card card )
{
    this->cards.push_back( card );
    this->points = this->points + card.get_rank();
}

// TODO
Hand Hand::split()
{
}

