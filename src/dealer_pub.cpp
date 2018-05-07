#include "dealer_pub.h"

DealerPub::DealerPub()
{
}

void DealerPub::init()
{
    // create domain participant
    char partition_name[] = "";
    mgr.createParticipant( partition_name );

    // create type
    mt = new UberCasino::DealerTypeSupport();
    mgr.registerType( mt.in() );

    // create Topic
    mgr.createTopic( (char *) "dealer" );
    
    // create Publisher
    mgr.createPublisher();
    
    // create DataWriter
    mgr.createWriter();

    // Publish Events
    dwriter = mgr.getWriter();
    DealerWriter = UberCasino::DealerDataWriter::_narrow(dwriter.in());
}

void DealerPub::publish( UberCasino::Dealer data )
{
    DDS::ReturnCode_t status = DealerWriter->write( data, DDS::HANDLE_NIL );
    checkStatus( status, "DealerDataWriter::write" );
}

