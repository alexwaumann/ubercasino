#ifndef DEALER_PUB_H
#define DEALER_PUB_H

#include "dds_entity_manager.h"
#include "ccpp_ubercasino.h"

class DealerPub
{
    public:
        DealerPub();
        void init();
        void publish( UberCasino::Dealer data );

    private:
        DDSEntityManager mgr;
        UberCasino::DealerTypeSupport_var mt;
        DDS::DataWriter_var dwriter;
        UberCasino::DealerDataWriter_var DealerWriter;
};

#endif

