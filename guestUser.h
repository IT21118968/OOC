//------guestUser.h------>

#include "Property.h"
class guestUser
{
private:
  int clientID;
  char clientName[30];
  char clientAddress[100];
  char clientEmail[50];
  int clientContact;
  
public:
  client();
  client(int pClientID, const char pClientName[], const char pClientAddress[],
  const char pClientEmail[], int pClientContact);
  void registerClient();
  void viewProperty();
  virtual void displayUserDetails();
  
};  
