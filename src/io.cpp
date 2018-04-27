#include "io.h"

/*
 * Class: read_listener
 */
read_listener::read_listener( dealer * dealer_ptr )
{
    this->dealer_ptr = dealer_ptr;
}

void read_listener::on_data_available( DDS::DataReader_ptr reader )
{
    ReturnCode_t status;
    PlayerSeq msgList;

    SampleInfoSeq infoSeq;
    status = m_Reader->take( msgList, infoSeq, LENGTH_UNLIMITED,
        ANY_SAMPLE_STATE, ANY_VIEW_STATE, ANY_INSTANCE_STATE );
    checkStatus( status, "PlayerDataReader::read" );
    for( DDS::ULong i = 0; i < msgList.length(); ++i )
    {
        if( msgList.length() > 0 )
        {
            this->dealer_ptr->callback( msgList[i] );
        }
    }
    status = m_Reader->return_loan( msgList, infoSeq );
    checkStatus( status, "PlayerDataReader::return_loan" );
}

/*
 * Class: dealer_pub()
 */
dealer_pub::dealer_pub()
{
    DDSEntityManager mgr;

    // create domain participant
    char partition_name[] = "";
    mgr.createParticipant( partition_name );

    // create type
    mt = new DealerTypeSupport();
    mgr.registerType( mt.in() );

    // create Topic
    std::cout << "Creating dealer topic" << std::endl;
    mgr.createTopic( (char *) "dealer" );
    
    // create Publisher
    mgr.createPublisher();
    
    // create DataWriter
    mgr.createWriter();

    // Publish Events
    dwriter = mgr.getWriter();
    DealerWriter = DealerDataWriter::_narrow(dwriter.in());
}

void dealer_pub::publish( Dealer data )
{
    ReturnCode_t status = DealerWriter->write( data, DDS::HANDLE_NIL );
    checkStatus( status, "DealerDataWriter::write" );
}

// game_pub
game_pub::game_pub()
{

    // create domain participant
    char partition_name[] = "";
    mgr.createParticipant( partition_name );

    // create type
    mt = new GameTypeSupport();
    mgr.registerType( mt.in() );

    // create Topic
    std::cout << "Creating game topic" << std::endl;
    mgr.createTopic( (char *) "game" );
    
    // create Publisher
    mgr.createPublisher();
    
    // create DataWriter
    mgr.createWriter();

    // Publish Events
    dwriter = mgr.getWriter();
    GameWriter = GameDataWriter::_narrow(dwriter.in());
}

void game_pub::publish( Game data )
{
    ReturnCode_t status = GameWriter->write( data, DDS::HANDLE_NIL );
    checkStatus( status, "GameDataWriter::write" );
}

// player_sub
player_sub::player_sub( dealer * dealer_ptr )
{

    // create domain participant
    char partition_name[] = "";
    mgr.createParticipant( partition_name );

    // create type
    mt = new PlayerTypeSupport();
    mgr.registerType( mt.in() );

    // create Topic
    std::cout << "Creating player topic" << std::endl;
    mgr.createTopic( (char *) "player" );
    
    //create Subscriber
    mgr.createSubscriber();

    // create DataReader
    mgr.createReader();

    dreader = mgr.getReader();

    read_listener * listener = new read_listener( dealer_ptr );
    
    listener->m_Reader = PlayerDataReader::_narrow( dreader.in() );

    checkHandle( listener->m_Reader.in(), "PlayerDataReader::_narrow" );

    DDS::StatusMask mask = DDS::DATA_AVAILABLE_STATUS;
    listener->m_Reader->set_listener( listener, mask );
}

