#ifndef READ_LISTENER_H
#define READ_LISTENER_H

#include "dds_entity_manager.h"
#include "ccpp_ubercasino.h"

class ReadListener: public virtual DDS::DataReaderListener
{
    public:
        ReadListener(); 

        UberCasino::PlayerDataReader_var m_Reader;
        
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
};

#endif

