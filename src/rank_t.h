/*
 * File: rank_t.h
 * Created: 04/02/2018
 * Modified: 04/03/2018
 */

#ifndef __RANK_T_H__
#define __RANK_T_H__

#include <string>
#include <iostream>

enum class rank_t {
    ace, 
    two, 
    three, 
    four, 
    five, 
    six, 
    seven, 
    eight,
    nine, 
    ten, 
    jack, 
    queen, 
    king 
};

std::ostream& operator<<( std::ostream& os, const rank_t& f );
std::string operator+( const rank_t& f, std::string& str );
std::string operator+( std::string& in, const rank_t& f );

int operator+( const rank_t& a, const rank_t& b );
int operator+( int& a, const rank_t& b );

#endif

