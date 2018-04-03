/*
 * File: test_face_t.h
 * Created: 04/02/2018
 * Modified: 04/03/2018
 */

#include "face_t.h"
#include <sstream>

using namespace std;

/*
 * Tests for the operator overloads
 */
bool ostream_face( stringstream, face_t, string );
bool face_plus_string( face_t, string, string );
bool string_plus_face( string, face_t, string );
bool int_plus_face( int, face_t, int );
bool face_plus_face( face_t, face_t, int );

int tests = 0; int pass = 0; int fail = 0;

int main( int argc, char ** argv )
{
    tests +=1;
    if( ostream_face( stringstream{}, face_t::ace, "ace" ) )
        pass += 1;
    else
        fail += 1;
    
    tests +=1;
    if( face_plus_string( face_t::ace, " of hearts", "ace of hearts" ) )
        pass += 1;
    else
        fail += 1;

    tests +=1;
    if( string_plus_face( "i am the ", face_t::king, "i am the king" ) )
        pass += 1;
    else
        fail += 1;

    tests +=1;
    if( int_plus_face( 3, face_t::king, 13 ) )
        pass += 1;
    else
        fail += 1;

    tests +=1;
    if( face_plus_face( face_t::five, face_t::king, 15 ) )
        pass += 1;
    else
        fail += 1;

    cout << "Test Summary:" << endl
         << "tests: " << tests
         << "\tpassed: " << pass
         << "\tfailed: " << fail << endl;
    return 0;
}

bool ostream_face( stringstream ss, face_t f, string exp )
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

bool face_plus_string( face_t a, string b, string exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: face_t + string" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool string_plus_face( string a, face_t b, string exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: string + face_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool int_plus_face( int a, face_t b, int exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: int + face_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

bool face_plus_face( face_t a, face_t b, int exp )
{
    if( (a + b) != exp )
    {
        cout << "Error: face_t + face_t" << endl
             << "\tExpected: " << exp << endl
             << "\tActual  : " << (a + b) << endl;
        
        return false;
    }

    return true;
}

