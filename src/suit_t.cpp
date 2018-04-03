/*
 * File: suit_t.cpp
 * Created: 04/02/2018
 * Modified: 04/02/2018
 */

#include "suit_t.h"

std::ostream& operator<<( std::ostream& os, const suit_t& s )
{
    if( s == suit_t::hearts )
        os << "hearts";
    else if( s == suit_t::diamonds )
        os << "diamonds";
    else if( s == suit_t::clubs )
        os << "clubs";
    else if( s == suit_t::spades )
        os << "spades";
    else
        os << "unknown";

    return os;
}

std::string operator+( const suit_t& s, std::string& in )
{
    std::string str;

    if( s == suit_t::hearts )
        str = "hearts" + in;
    else if( s == suit_t::diamonds )
        str = "diamonds" + in;
    else if( s == suit_t::clubs )
        str = "clubs" + in;
    else if( s == suit_t::spades )
        str = "spades" + in;
    else
        str = "unknown" + in;

    return str;
}

std::string operator+( std::string& in, const suit_t& s )
{
    std::string str;

    if( s == suit_t::hearts )
        str = in + "hearts";
    else if( s == suit_t::diamonds )
        str = in + "diamonds";
    else if( s == suit_t::clubs )
        str = in + "clubs";
    else if( s == suit_t::spades )
        str = in + "spades";
    else
        str = in + "unknown";

    return str;
}

