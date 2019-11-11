#include<iostream>
#include <list>
#include <iterator>
#include <fstream>
#include "createTable.h"

using namespace std;

bool binarySearch (long int search, long int hashSearch, table values[]);

int main()
{
   table hashValues[90];
   createTable(table hashValues[]);
   long int search, hashSearch;
   bool found = false;
   char answer = 'n';
   do
   {
      cout << endl << "Enter the phone number to search: " << endl;
      cin >> search;
   
      hashSearch = createTable.createhashvalue(search);

      found = binarySearch(search, hashSearch, hashValues[]);

      if (found != true)
      {   cout << "No person was found with that phone number.";
         cout << endl << "Would you like to search again? (y/n)";
         cout << ":" << endl;
         cin >> answer;
         if (answer == 'n')
             found = true;
     }
     
   } while (!found)
   
   return 0;
}


bool binarySearch (long int search, long int hashSearch, table values[])

{

   node *start = table[hashSearch].head;
   node *last = NULL;
   
   do 
   {

      node *mid == middle(start, last)


      if (mid -> listcomponents.phone == search)
      {
         cout << endl << "The phone number: " << search;
         cout << endl << "belongs to: " << listcomponents.first;
         cout << " " << listcomponents.last << endl;
         return true;
      }
      else if (mid -> listcomponents.phone  == NULL)
          return false;
      else if (mid -> listcomponents.phone < search)
         start = mid -> next;
      else
          last = mid;
}      


