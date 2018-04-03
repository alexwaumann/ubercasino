/*
 * File: face_t.cpp
 * Created: 04/02/2018
 * Modified: 04/03/2018
 */

#include "face_t.h"

std::ostream& operator<<( std::ostream& os, const face_t& f )
{
    if( f == face_t::ace )
        os << "ace";
    else if( f == face_t::two )
        os << "two";
    else if( f == face_t::three )
        os << "three";
    else if( f == face_t::four )
        os << "four";
    else if( f == face_t::five )
        os << "five";
    else if( f == face_t::six )
        os << "six";
    else if( f == face_t::seven )
        os << "seven";
    else if( f == face_t::eight )
        os << "eight";
    else if( f == face_t::nine )
        os << "nine";
    else if( f == face_t::ten )
        os << "ten";
    else if( f == face_t::jack )
        os << "jack";
    else if( f == face_t::queen )
        os << "queen";
    else if( f == face_t::king )
        os << "king";
    else
        os << "unknown";

    return os;
}

std::string operator+( const face_t& f, std::string& in )
{
    std::string str = in;
    if( f == face_t::ace )
        str = "ace" + in;
    else if( f == face_t::two )
        str = "two" + in;
    else if( f == face_t::three )
        str = "three" + in;
    else if( f == face_t::four )
        str = "four" + in;
    else if( f == face_t::five )
        str = "five" + in;
    else if( f == face_t::six )
        str = "six" + in;
    else if( f == face_t::seven )
        str = "seven" + in;
    else if( f == face_t::eight )
        str = "eight" + in;
    else if( f == face_t::nine )
        str = "nine" + in;
    else if( f == face_t::ten )
        str = "ten" + in;
    else if( f == face_t::jack )
        str = "jack" + in;
    else if( f == face_t::queen )
        str = "queen" + in;
    else if( f == face_t::king )
        str = "king" + in;
    else
        str += "unknown" + in;

    return str;
}

std::string operator+( std::string& in, const face_t& f )
{
    std::string str = in;

    if( f == face_t::ace )
        str += "ace";
    else if( f == face_t::two )
        str += "two";
    else if( f == face_t::three )
        str += "three";
    else if( f == face_t::four )
        str += "four";
    else if( f == face_t::five )
        str += "five";
    else if( f == face_t::six )
        str += "six";
    else if( f == face_t::seven )
        str += "seven";
    else if( f == face_t::eight )
        str += "eight";
    else if( f == face_t::nine )
        str += "nine";
    else if( f == face_t::ten )
        str += "ten";
    else if( f == face_t::jack )
        str += "jack";
    else if( f == face_t::queen )
        str += "queen";
    else if( f == face_t::king )
        str += "king";
    else
        str += "unknown";

    return str;
}

int operator+( int& a, const face_t& b )
{
    int sum = a;
    if( b == face_t::ace )
        sum += 1;
    else if( b == face_t::two )
        sum += 2;
    else if( b == face_t::three )
        sum += 3;
    else if( b == face_t::four )
        sum += 4;
    else if( b == face_t::five )
        sum += 5;
    else if( b == face_t::six )
        sum += 6;
    else if( b == face_t::seven )
        sum += 7;
    else if( b == face_t::eight )
        sum += 8;
    else if( b == face_t::nine )
        sum += 9;
    else if( b == face_t::ten ||
             b == face_t::jack ||
             b == face_t::queen ||
             b == face_t::king )
        sum += 10;

    return sum;
}

