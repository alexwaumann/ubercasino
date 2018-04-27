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
        UberCasino::Dealer dealer_struct;
        UberCasino::Game game_struct;
        void callback( UberCasino::Player data );

        void timer_expired();
    private:
};

#endif
