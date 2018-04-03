/*
 * File: face_t.h
 * Created: 04/02/2018
 * Modified: 04/03/2018
 */

#ifndef __FACE_T__
#define __FACE_T__

#include <string>
#include <iostream>

enum class face_t {
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

std::ostream& operator<<( std::ostream& os, const face_t& f );
std::string operator+( const face_t& f, std::string& str );
std::string operator+( std::string& in, const face_t& f );

int operator+( int& a, const face_t& b );

#endif

