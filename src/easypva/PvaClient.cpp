#include "PvaClient.h"
#include "pv/clientFactory.h"

namespace epics { namespace pvaPy {


PvaClient::ClientFactoryController PvaClient::clientFactoryController;

PvaClient::ClientFactoryController::ClientFactoryController() 
{
    epics::pvAccess::ClientFactory::start();
}

PvaClient::ClientFactoryController::~ClientFactoryController() 
{
    epics::pvAccess::ClientFactory::stop();
}

PvaClient::PvaClient() 
{
}

PvaClient::~PvaClient()
{
}

}}

