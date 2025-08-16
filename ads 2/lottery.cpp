#include<iostream>
#include<set>
#include<ctime>//libraries
using namespace std;

int main(){//main function.
  time_t current_time = time(nullptr);
  srand (static_cast <unsigned int >(current_time));
   set<int> numlist;

   while (numlist.size() < 6)
   {
     int random_number = rand() % 49 +1;
     numlist.insert(random_number);
     //generating the random number and then inserting it using the .insert function.
   }
   //itarator.
   set<int>::iterator itr;

   for (itr = numlist.begin(); itr != numlist.end(); itr++)
   {
    cout << *itr << " ";

   }
   cout << endl;
    return 0;
}
//SUMMERY.
//THE PROGRAM GENERATE THE 6 UNIQUE NUMBERS BETWEEN 1 TO 49 AND STORE THE NUMBERS IN A SET USING THE INSERT FUNCTION.

// IT THEN , GOES THROUGH THE WHILE LOOP AND USES AN ITERATOR TO GO THROUGH EACH SET AND PRINT EACH NUMBER IGNORING THE REPEATED NUMBER AND PRINT IN A ASCENDING ORDER.