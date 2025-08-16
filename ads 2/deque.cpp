#include <iostream>
#include <deque>

int main() {
    std::deque<float> A;
    float input;
    while(std::cin >> input, input != 0) {
        if(input>0) {
            A.push_back(input);
        }
        else {
            A.push_front(input);
        }
    }
    std::deque<float>::iterator itr;
    std::deque<float>::iterator last_negative_pos = A.begin();//declartion of the iteration.

    for(itr = A.begin(); itr != A.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl << std::endl;
        //  it prints A

    for(itr = A.begin(); itr != A.end(); itr++) {
        if(*(itr) < 0) {
            last_negative_pos = itr;
        }
    }// return pointer to last negative value in deque

    A.insert(std::next(last_negative_pos), 0);
        // insert 0 after position of last neg value in the list.

    for(itr = A.begin(); itr != A.end(); itr++) {
        std::cout << *itr;
        if(std::next(itr) != A.end()) {
            std::cout << ";";
        }
    }
    return 0;
}
//SUMMERY.
//DECLARTION OF FLOAT IN DEQUE , READING NUMBER UNTIL 0 IS ENTERED BY USER.
//WHEN INPUT IS LESS IN 0 PUSH FRONT, WHENT GREATER THAN PUSH BACK.
//PRINTING DEQUE USING FOR LOOP.
//FINDING LAST NEG NUMBER USING ITERATION.
//USING INSERT FUNCTION OF ENTERING THE 0 AFTER LAST NEG NUMBER.
//PRINTING NEW DEQUEUED ELEMENT IN THE LIST  WHOCH ARE SEPERATED BY ;.
