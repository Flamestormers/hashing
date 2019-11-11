#include <iostream>
#include <list>
#include <iterator>
#include <fstream>
#include <string>

using namespace std;

class createTable
{
   private:
  struct listcomponents
  {
    string first, last;
    long int phone;
  }
  
  struct table
  {
    int hashvalue;
    list <listcomponents> LIST;
  }
    
 public:
  
  void createTable (table values[90]);
  /*
    Call function for to make a table
  */

  int createhashvalue (long int phonenumber);
  /*
    Call function to make a hash value
  */


};
