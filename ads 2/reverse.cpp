#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    //main function 

 vector <int> veclist;
 //veclist is a empty vector that will store integers.
 vector<int> :: iterator itr = veclist.end();
 for (int i = 1; i<31; i++){
    veclist.push_back(i);
 }//this loop will run from 1 to 30 and adds number to the veclist using .push_back(i).
 veclist.push_back(5);
 //now reversing the vectors.
 vector<int>:: iterator begin = veclist.begin();
 vector<int> :: iterator end = veclist.end();
 reverse(begin,end);
 //printing the reversed vector.
 for(itr = veclist.begin(); itr != veclist.end(); itr++){
    cout<< *itr << " ";
 }
 cout << endl;
 for (itr = veclist.begin(); itr != veclist.end();itr++){
    replace(begin, end,  5, 129);
 }
 //replacing all 5s with 129.
 for (itr = veclist.begin(); itr != veclist.end();itr++){
    cout << *itr << " ";
 }
 // printing the modified vector.
 cout << endl;

 return 0;

}
//SUMMERY 
//THIS PROGRAM create lists of number from 1 to 30.
//ADDING EXTRA 5 AT END AND THEN REVERSING THE ENTIRE VECTOR.
//PRINT THE REVERSED VECTOR.
//REPLACING  all 5 with 129 and printing the modified vector.