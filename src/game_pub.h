#ifndef GAME_PUB_H
#define GAME_PUB_H

#include "dds_entity_manager.h"
#include "ccpp_ubercasino.h"

class GamePub
{
    public:
        GamePub();
        void init();
        void publish( UberCasino::Game data );

    private:
        DDSEntityManager mgr;
        UberCasino::GameTypeSupport_var mt;
        DDS::DataWriter_var dwriter;
        UberCasino::GameDataWriter_var GameWriter;
};

#endif

