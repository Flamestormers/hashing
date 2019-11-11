#include <iostream>
#include <list>
#include <iterator>
#include <fstream>

using namespace std;

class createTable
{
 public:
  
  void createTable (ifstream inFile, list <int> table[365]);
  /*
    Call function for to make a table
  */

  int createhashvalue (int month, int day, int year);
  /*
    Call function to make a hash value
  */

};
