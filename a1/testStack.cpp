#include "Stack.h"
#include <iostream>

using namespace std;

int main() {

    Stack<int> stk(4);
    int numberOfElems = stk.getNumEntries();
    cout<< numberOfElems << " element/s in stack" << endl;

    for(int i = 0; i<4; i++) {
        stk.push(i);
    }
        //push 0 to 3 in stack

    numberOfElems = stk.getNumEntries();
    cout<< numberOfElems << " element/s in stack" << endl;
        // print number of elems in stack

    if(!stk.push(5)) {
        cout << "pushing 5" << endl;
        cout<< "Stack Full" << endl;
    }
        // check for fullness os stack

    int top;
    top = stk.back();
    cout<< top << " is in the top of the stack" << endl;
        // prints top elem in stack

    Stack<int> cpy_stk(stk);
    numberOfElems = cpy_stk.getNumEntries();
    cout<< numberOfElems << " element/s in copy stack" << endl;
        // copy constructor

    int x;
    cout << "printing elements from stk through pop" << endl;
    while(stk.pop(x)){
        cout<< x << " ";
    }
    cout<< endl;

    int y;
    cout << "printing elements from copy stk" << endl;
    while(cpy_stk.pop(y)){
        cout<< y << " ";
    }
    cout<< endl;
        // popping and printing elems from stack

    return 0;
}