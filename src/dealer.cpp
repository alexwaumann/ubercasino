/*
 * File: dealer.cpp
 * Created: 04/01/2018
 * Modified: 04/01/2018
 */

#include<boost/thread.hpp>
#include "dealer.h"

dealer::dealer() 
{
}

dealer::~dealer() { }

void dealer::callback( ubercasino::Player data )
{
    std::cout << "Player payload received" << std::endl;
}
