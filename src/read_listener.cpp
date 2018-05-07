#include "read_listener.h"
#include "interface.h"

ReadListener::ReadListener()
{
}

void ReadListener::on_data_available( DDS::DataReader_ptr reader )
{
    DDS::ReturnCode_t status;
    UberCasino::PlayerSeq msgList;

    DDS::SampleInfoSeq infoSeq;
    status = m_Reader->take( msgList, infoSeq, LENGTH_UNLIMITED,
        ANY_SAMPLE_STATE, ANY_VIEW_STATE, ANY_INSTANCE_STATE );
    checkStatus( status, "PlayerDataReader::read" );
    for( DDS::ULong i = 0; i < msgList.length(); ++i )
    {
        if( msgList.length() > 0 )
        {
            on_data_received( msgList[i] );
        }
    }
    status = m_Reader->return_loan( msgList, infoSeq );
    checkStatus( status, "PlayerDataReader::return_loan" );
}

