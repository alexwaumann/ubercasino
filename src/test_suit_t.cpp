/*
 * File: test_suit_t.cpp
 * Created: 04/03/2018
 * Modified: 04/03/2018
 */

#include "suit_t.h"
#include <sstream>

using namespace std;

bool ostream_suit( stringstream ss, suit_t s, string exp );
bool suit_plus_string( suit_t a, string b, string exp );
bool string_plus_suit( string a, suit_t b, string exp );

int tests = 0; int pass = 0; int fail = 0;

int main( int argc, char ** argv )
{
    tests += 1;
    if( ostream_suit( stringstream{}, suit_t::hearts, "hearts" ) )
        pass += 1;
    else
        fail +=1;

    tests += 1;
    if( suit_plus_string( suit_t::diamonds, " everywhere!", "diamonds everywhere!" ) )
        pass += 1;
    else
        fail +=1;

    tests += 1;
    if( string_plus_suit( "ace of ", suit_t::hearts, "ace of hearts" ) )
        pass += 1;
    else
        fail +=1;
    
    /* cout << "Test Summary:" << endl */
    /*      << "tests: " << tests */
    /*      << "\tpassed: " << pass */
    /*      << "\tfailed: " << fail << endl; */

    return 0;
}

bool ostream_suit( stringstream ss, suit_t s, string exp )
{
    ss << s;
    if( ss.str() != exp )
    {
        cout << "Error: ostream (<<)" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << ss.str() << endl;
        
        return false;
    }

    return true;
}

bool suit_plus_string( suit_t a, string b, string exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: suit_t + string" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool string_plus_suit( string a, suit_t b, string exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: string + suit_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

