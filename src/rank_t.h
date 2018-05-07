/*
 * File: rank_t.h
 */

#ifndef RANK_T_H
#define RANK_T_H

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

