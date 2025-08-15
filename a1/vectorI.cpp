#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    vector<string> arr; // define vector
    string user_input; // define variable for user input

    while(cin >> user_input && user_input != "END") {
        arr.push_back(user_input);
    }
        // loops for user input untill
        // user inputs "END"

    for(size_t i = 0; i < arr.size(); i++) {
        cout<< arr[i] << " ";
    }
    cout<< endl;
        // prints elems using index [] operator

    vector<string>:: iterator iter; // define iterator as iter
    for(iter = arr.begin(); iter !=arr.end(); iter++) {
        if(next(iter) != arr.end()) {
            cout << *iter << ",";
        }
            // prints comma after each string except for last string
        else{
            cout << *iter << endl;
            // prints last string with new line
        }
    }
        // prints elems using iterator 

    return 0;
}