#include "game_pub.h"

GamePub::GamePub()
{
}

void GamePub::init()
{
    // create domain participant
    char partition_name[] = "";
    mgr.createParticipant( partition_name );

    // create type
    mt = new UberCasino::GameTypeSupport();
    mgr.registerType( mt.in() );

    // create Topic
    mgr.createTopic( (char *) "game" );
    
    // create Publisher
    mgr.createPublisher();
    
    // create DataWriter
    mgr.createWriter();

    // Publish Events
    dwriter = mgr.getWriter();
    GameWriter = UberCasino::GameDataWriter::_narrow(dwriter.in());
}

void GamePub::publish( UberCasino::Game data )
{
    DDS::ReturnCode_t status = GameWriter->write( data, DDS::HANDLE_NIL );
    checkStatus( status, "GameDataWriter::write" );
}

