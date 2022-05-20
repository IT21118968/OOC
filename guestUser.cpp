//--------guestUser.cpp-------//


#include "guestUser.h"
#include <cstring>

guestUser::client()
{
  clientID = 0;
  clientContact = 0;
  strcpy(clientName,"");
  strcpy(clientAddress,"");
  strcpy(clientEmail,"");
  
}
guestUser::client(int pclientID,
const char client pclientName[],
const char clientAddress[],int clientContact )
{
  clientID = pclientID;
  clientContact = pclientContact;
  strcpy(clientName,pclientName);
  strcpy(clientAddress,pclientAddress);
  strcpy(clientEmail,pclientEmail);
}

void guestUser::registerClient()
{
}
void guestUser::displayUserDetails()
{
}
void guestUser::viewProperty()
{
}
guestUser::~client()
{
  //destructor
}
