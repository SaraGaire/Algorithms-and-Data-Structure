#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<std::string> arr; // define vector
    std::string user_input; // define variable for user input

    while(std::getline(std::cin, user_input) && user_input != "END") {
        arr.push_back(user_input);
    }
        // loops for user input untill
        // user inputs "END"

    if(arr.size() >= 5) {
        std::swap(arr[1],arr[4]);
    }
    else{
        std::cout<< "No 2nd or 5th element" << std::endl;
    }
        // look if vector has 5 or more elements
        // if present swap elem at pos 2 with 5

    arr[arr.size()-1] = "???";
        // replace last elem of array with "???"

    for(size_t i = 0; i < arr.size(); i++) {
        if(i != arr.size() -1) {
            std::cout << arr[i] << ",";
        }
        else {
            std::cout << arr[i] << std::endl;
        }
    }
        // print array separated by ","
        // using index operators
        // except for the last one

    std::vector<std::string> :: iterator iter;
    for(iter = arr.begin(); iter != arr.end(); iter++) {
        if(std::next(iter) != arr.end()) {
            std::cout << *iter << ";";
        }
        else {
            std::cout << *iter << std::endl;
        }
    }
        // print array separated by ";"
        // using iterators
        // except for the last one

    for(iter = arr.end()-1; iter!= arr.begin(); iter--) {
        std::cout << *iter << " ";
    }
    std::cout << *iter << std::endl;
        // print array backward
        // separated by " "
        // using iterators

    return 0;
}