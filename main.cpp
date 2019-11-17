#include<iostream>
#include <cstdlib>
#include <list>
#include <iterator>
#include <fstream>
#include <string>

using namespace std;

  
  struct listType
  {
    string first, last;
    long int phone = 0;
  };

  struct table
  {
    int numOfHashes = 0;
    listType data[100];
  };

bool binarySearch (long int search, long int hashSearch, table values[]);
void createTable (table values[]);
int createhashvalue (long int phonenumber);
void sort(table values[]);


int main()
{
   table values[90];
   createTable(values);
   long int search, hashSearch;
   bool found = false;
   char answer = 'n';

   // User input to search for name relating to phone number
   cout << endl << "Enter the phone number to search: " << endl;
   cin >> search;
   
   // Creating hash number based off input
   hashSearch = createhashvalue(search);
   
     
   if(values[hashSearch].numOfHashes != 0)
      found = binarySearch(search, hashSearch, values);

   
   if (found != true)
   {  cout << endl;
      cout << "No person was found with that";
      cout << " phone number." << endl;
   }
   return 0;
}


bool binarySearch (long int search, long int hashSearch, table values[])
{
   if(values[hashSearch].numOfHashes == 1)
   {
      cout << endl << "The phone number: " << search;
      cout << endl << "belongs to: " << values[hashSearch].data[0].first;
      cout << " " << values[hashSearch].data[0].last << endl;
      return true;
   }
   
   for(int x = 0; x < values[hashSearch].numOfHashes; x++)
   {   
      if (values[hashSearch].data[x].phone == search)
      {
         cout << endl << "The phone number: " << search;
         cout << endl << "belongs to: " << values[hashSearch].data[x].first;
         cout << " " << values[hashSearch].data[x].last << endl;
      
         return true;
      }
   }

   return false;      
}
void createTable (table values[90])
{
   string first, last, filename;
   long int phoneNumber;
   int x, a = 0;
   ifstream inFile;
  
   cout<< "What is the name of the file: " << endl;
   cin >> filename;

   inFile.open(filename); 
   if (!inFile)
   {
      cerr << "Unable to open file: " << filename << endl;
      exit(1);
   }
  
  
   while(inFile)
      {
      inFile >> phoneNumber >> first >> last;
      x= createhashvalue(phoneNumber);
      

      values[x].numOfHashes++;
      a = values[x].numOfHashes;
      values[x].data[a].first = first;
      values[x].data[a].last = last;
      values[x].data[a].phone = phoneNumber;
      }

  inFile.close();
}

int createhashvalue (long int phonenumber)
{
  int sum=0;
  while(phonenumber>0)
    {
      sum+= phonenumber%10;
      phonenumber/=10;
    }
   return sum;
}
