/*
 * File: shoe.h
 */

#ifndef SHOE_H
#define SHOE_H

#include "shoe_t.h"
#include "card.h"

class Shoe
{
    public:
        Shoe();
        Shoe( int test_case );

        shoe_t type() const;
        int test_case() const;

        void type( shoe_t type );
        void test_case( int test_case );

        Card draw_card();
        void shuffle();
        void reset();

    private:
        shoe_t m_type;
        int m_test_case;
};

#endif
