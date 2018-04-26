/*
 * Dealer.cpp
 * Created: 04/05/2018
 * Modified: 04/05/2018
 */

#include <string>
#include <iostream>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include "DDSEntityManager.h"
#include "ccpp_ubercasino.h"
#include "dealer.h"
#include "io.h"

int main( int argc, char ** argv )
{

    dealer d = dealer();
    boost::uuids::uuid uid = boost::uuids::random_generator()();
    memcpy( d.dealer_struct.uid, &uid, sizeof( d.dealer_struct.uid ) );
    strncpy( d.dealer_struct.name, "Alejandro", sizeof( d.dealer_struct.name ) );

    boost::uuids::uuid game_uid = boost::uuids::random_generator()();
    memcpy( d.dealer_struct.game_uid, &game_uid, sizeof( d.dealer_struct.game_uid ) );

    std::cout << "UberCasino starting with an infinite deck." << std::endl;

    std::cout
        << "Dealer Name: Alejandro" << std::endl
        << "Dealer UID : " << uid << std::endl;

    std::cout
        << "Enter 'start' to begin an infinite shoe game" << std::endl
        << "Enter 'q' to exit" << std::endl;

    char user_input[100];
    while( std::cin.getline( user_input, sizeof( user_input ) ) )
    {
        if( user_input[0] == 'q' )
            break;

        // fltk callbacks will call this function with a string
        //d.user_input( std::string( user_input ) );
    }

    return 0;
}

