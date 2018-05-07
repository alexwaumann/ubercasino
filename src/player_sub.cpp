#include "player_sub.h"
#include "read_listener.h"

PlayerSub::PlayerSub()
{
}

void PlayerSub::init()
{
    // create domain participant
    char partition_name[] = "";
    mgr.createParticipant( partition_name );

    // create type
    mt = new UberCasino::PlayerTypeSupport();
    mgr.registerType( mt.in() );

    // create Topic
    mgr.createTopic( (char *) "player" );
    
    //create Subscriber
    mgr.createSubscriber();

    // create DataReader
    mgr.createReader();

    dreader = mgr.getReader();

    ReadListener * listener = new ReadListener();
    
    listener->m_Reader = UberCasino::PlayerDataReader::_narrow( dreader.in() );

    checkHandle( listener->m_Reader.in(), "PlayerDataReader::_narrow" );

    DDS::StatusMask mask = DDS::DATA_AVAILABLE_STATUS;
    listener->m_Reader->set_listener( listener, mask );
}

