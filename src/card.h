/*
 * File: card.h
 */

#ifndef CARD_H
#define CARD_H

#include "ccpp_ubercasino.h"

using namespace UberCasino;

class Card
{
    public:
        Card( suite_t suit, card_kind rank );
        Card( suite_t suit, card_kind rank, bool valid );

        suite_t suit();
        card_kind rank();
        bool valid();

    private:
        card_t m_card; // uses card type from UberCasino namespace
};

#endif

