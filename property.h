//------property.h-------//


#include "purchasing.h"
#include "selling.h"
#include "seller.h"
#include "buyer.h"
#include "agent.h"

#define SIZE1 2
#define SIZE2 2

class property
{
private:
  int propertyID;
  char propertyLoc[20];
  char propertytype[20];
  double propertyPrice;
  char propertyStatus[25];
  int counter = 0;
  
  purchasing*book[SIZE1];
  selling*sell[SIZE2];
  seller*sellr;
  buyer*buyr;
  agent*ag;
  
public:
  property();
  property(int sell1, int sell2, int book1, int book2,
  seller* psellr, buyer*pbuyr, agent*pag);
  void propertyDetails(int propertyID, const char propertyLoc,
  const char propertyType, double propertyPrice,
  const char propertyStatus,
  seller* psellr, buyer*pbuyr, agent*pag );
  void deletePropertyDetails();
  void updatePropertyDetails();
  void displayPropertyDetails();
  ~property();
  
  };
  
