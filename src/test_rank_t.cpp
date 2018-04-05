/*
 * File: test_rank_t.h
 * Created: 04/02/2018
 * Modified: 04/03/2018
 */

#include "rank_t.h"
#include <sstream>

using namespace std;

/*
 * Tests for the operator overloads
 */
bool ostream_rank( stringstream, rank_t, string );
bool rank_plus_string( rank_t, string, string );
bool string_plus_rank( string, rank_t, string );
bool int_plus_rank( int, rank_t, int );
bool rank_plus_rank( rank_t, rank_t, int );

int tests = 0; int pass = 0; int fail = 0;

int main( int argc, char ** argv )
{
    tests +=1;
    if( ostream_rank( stringstream{}, rank_t::ace, "ace" ) )
        pass += 1;
    else
        fail += 1;
    
    tests +=1;
    if( rank_plus_string( rank_t::ace, " of hearts", "ace of hearts" ) )
        pass += 1;
    else
        fail += 1;

    tests +=1;
    if( string_plus_rank( "i am the ", rank_t::king, "i am the king" ) )
        pass += 1;
    else
        fail += 1;

    tests +=1;
    if( int_plus_rank( 3, rank_t::king, 13 ) )
        pass += 1;
    else
        fail += 1;

    tests +=1;
    if( rank_plus_rank( rank_t::five, rank_t::king, 15 ) )
        pass += 1;
    else
        fail += 1;

    /* cout << "Test Summary:" << endl */
    /*      << "tests: " << tests */
    /*      << "\tpassed: " << pass */
    /*      << "\tfailed: " << fail << endl; */
    return 0;
}

bool ostream_rank( stringstream ss, rank_t f, string exp )
{
    ss << f;
    if( ss.str() != exp )
    {
        cout << "Error: ostream (<<)" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << ss.str() << endl;
        
        return false;
    }

    return true;
}

bool rank_plus_string( rank_t a, string b, string exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: rank_t + string" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool string_plus_rank( string a, rank_t b, string exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: string + rank_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool int_plus_rank( int a, rank_t b, int exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: int + rank_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool rank_plus_rank( rank_t a, rank_t b, int exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: rank_t + rank_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

