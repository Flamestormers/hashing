#ifndef "creatTable.h"
#include "createTable.h"

void createTable (table values[63])
{
  string first, last, filename;
  int phoneNumber, x;
  listcomponents info;
  ifstream inFile;
  for(int i=0; i<63; i++)
    {
      values[i].hashvalue = i;
    }
  cout<< "What is the name of the file I'm reading from" << endl;
  cin >> filename;

  inFile.open(filename);
  if (!inFile)
    {
      cerr << "Unable to open file " << filename;
      exit(1);
    }
  
  
  while(inFile)
    {
      inFile >>phoneNumber>> first >> last;
      x= createhashvalue(phoneNumber);

      info.first = first;
      info.last = last;
      info.phone= phoneNumber;
      
      values[x].LIST.push_back(info);
    }

  inFile.close;
      
}

int createhashvalue (int phonenumber)
{
  int sum=0;
  while(phonenumber>0)
    {
      sum+= phonenumber%10;
      phonenumber/=10;
    }
  return sum;
}


#endif
