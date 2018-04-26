/*
 * file: dealer.h
 * Created: 04/01/2018
 * Modified: 04/02/2018
 */

#ifndef DEALER_H
#define DEALER_H

#include <string>
#include <iostream>
#include <boost/uuid/uuid.hpp>
#include "ccpp_ubercasino.h"

class dealer
{
    public:
        dealer();
        ~dealer();
        ubercasino::Dealer dealer_struct;
        ubercasino::Game game_struct;
        void callback( ubercasino::Player data );

        void timer_expired();
    private:
};

#endif
