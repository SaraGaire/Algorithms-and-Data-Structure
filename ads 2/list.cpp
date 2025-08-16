#include <iostream>
#include <list>
#include <fstream>//header.
using namespace std;
int main() {//main function of the program.
    list<int> A; 
    list<int> B; 
    int input;

    // Taking user input
    while (true) {
        cin >> input;
        if (input <= 0) break; // Stop when a non-positive number is entered by the user.
        A.push_back(input);  
        B.push_front(input); 
    }
    list<int>::iterator itr;
    ofstream textfile("listB.txt");
    if (!textfile.is_open()) {
        cerr << "Cannot open file" << endl;
        return 1; 
    }
    
    for (itr = B.begin(); itr != B.end(); itr++) {
        textfile << *itr << " "; // Writing list B to the file
    }
    textfile.close(); 

    // Prints list A
    for (itr = A.begin(); itr != A.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    // Prints list B
    for (itr = B.begin(); itr != B.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl << endl;

    //moving the  first element to  back.
    int push_elem = A.front();
    A.pop_front();
    A.push_back(push_elem);
      for (itr = A.begin(); itr != A.end(); itr++) {
        cout << *itr;
        if (next(itr) != A.end()) {
            cout << ",";
        }
    }
       cout << endl;

    //moving first element to back.
    int push_elem_2 = B.front();
    B.pop_front();
    B.push_back(push_elem_2);
    for (itr = B.begin(); itr != B.end(); itr++) {
        cout << *itr;
        if (next(itr) != B.end()) {
            cout << ",";
        }
    }
    cout << endl << endl;

    // the list a to b.
    A.merge(B);
    for (itr = A.begin(); itr != A.end(); itr++) {
        cout << *itr << " ";
    }
    return 0;
}
//SUMMERY of the PROGRAM.
//WE TAKE THE ELE AND PUSH FRONT FOR A AND BACK FOR B.
//writing list b to our file and check if the list is inside or not and closes the text file.
//then, PRINTS THE LIST A AND B.
//MOVING THE FIRST ELEMENT TO BACK USING THE PUSHBACK FUNCTION.
//now printing the new LIST for both A AND B.
//finally , merging the LIST A AND B and printing the merged list.

