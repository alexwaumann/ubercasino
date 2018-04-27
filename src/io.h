#ifndef IO_H
#define IO_H

#include "DDSEntityManager.h"
#include "ccpp_ubercasino.h"
#include "dealer.h"

using namespace DDS;
using namespace UberCasino;

class read_listener: public virtual DDS::DataReaderListener
{
    public:
        read_listener( dealer * ptr ); 

        PlayerDataReader_var m_Reader;
        
        // Callback method
        virtual void on_data_available( DDS::DataReader_ptr reader );

        virtual void on_requested_deadline_missed(DDS::DataReader_ptr reader,
        const DDS::RequestedDeadlineMissedStatus &status)
        {
        }

        virtual void on_requested_incompatible_qos(DDS::DataReader_ptr reader,
        const DDS::RequestedIncompatibleQosStatus &status)
        {
        }

        virtual void on_sample_rejected(DDS::DataReader_ptr reader, const DDS
        ::SampleRejectedStatus &status)
        {
        }

        virtual void on_liveliness_changed(DDS::DataReader_ptr reader, const DDS
        ::LivelinessChangedStatus &status)
        {
        }

        virtual void on_subscription_matched(DDS::DataReader_ptr reader, const
        DDS::SubscriptionMatchedStatus &status)
        {
        }

        virtual void on_sample_lost(DDS::DataReader_ptr reader, const DDS
        ::SampleLostStatus &status)
        {
        }

    private:
        dealer * dealer_ptr;
};

class dealer_pub
{
    public:
        dealer_pub();
        void publish( Dealer data );
    private:
        DDSEntityManager mgr;
        DealerTypeSupport_var mt;
        DataWriter_var dwriter;
        DealerDataWriter_var DealerWriter;
};

class game_pub
{
    public:
        game_pub();
        void publish( Game data );
    private:
        DDSEntityManager mgr;
        GameTypeSupport_var mt;
        DataWriter_var dwriter;
        GameDataWriter_var GameWriter;
};

class player_sub
{
    public:
        player_sub( dealer * dealer_ptr );
    private:
        DDSEntityManager mgr;
        PlayerTypeSupport_var mt;
        DataReader_var dreader;
};

#endif
