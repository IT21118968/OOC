//-------property.cpp--------//


#include "property.h"
#define SIZE1 2
#define SIZE2 2

property::property()
{
}

property::property(int sell1, int sell2,
int book1, int book2, seller*psellr,
buyer*pbuyr, agent*pag)
{
  sell[0]= new selling(sell1);
  sell[1]= new selling(sell2);
  
  book[0]= new selling(book1);
  book[1]= new selling(book2);
  
  seller = psellr;
  buyer = pbuyr;
  agent = pag;
}

void property::propertyDetails(int propertyID,
cont char propertyLoc,  cont char propertyAddress,
cont char propertyType,  cont char propertyStatus,
double propertyPrice, seller*psellr,
buyer*pbuyr, agent*pag)
{
}
void property::deletePropertyDetails()
{
}
void property::updatePropertyDetails()
{
}
void property::calcPropertyPrice()
{
}
void property::displayPropertyDetails()
{
}

property::~property()
{
  //destructor
    for (int i= 0; i<SIZE1; i++)
    {
      delete book[i];
    }
  for (int i= 0; i<SIZE2; i++)
    {
      delete sell[i];
    }
}


