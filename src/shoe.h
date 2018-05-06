/*
 * File: shoe.h
 */

#ifndef SHOE_H
#define SHOE_H

#include "card.h"

enum shoe_t
{
    test,
    eight,
    infinite
};

class Shoe
{
    public:
        Shoe();
        Shoe( shoe_t type, int test_case );

        shoe_t type() const;
        int test_case() const;

        Card draw_card();
        void shuffle();
        void reset();

    private:
        shoe_t m_type;
        int m_test_case;
};

#endif
