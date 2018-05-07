#ifndef PLAYER_SUB_H
#define PLAYER_SUB_H

#include "dds_entity_manager.h"
#include "ccpp_ubercasino.h"

class PlayerSub
{
    public:
        PlayerSub();
        void init();

    private:
        DDSEntityManager mgr;
        UberCasino::PlayerTypeSupport_var mt;
        DDS::DataReader_var dreader;
};

#endif

