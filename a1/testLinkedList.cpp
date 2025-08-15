#include "LinkedList.h"
#include <iostream>

int main() {

    linkedlist<int> list;

    for(int i = 0; i < 5; i++) {
        list.pushBeginning(i);
    }
    list.printList();
        // test to push from front
        // followed by print method

    for(int i = 10; i > 5; i--) {
        list.pushEnd(i);
    }
    list.printList();
        // test to push from end
        // followed by print method

    int size = list.returnSize();
    std::cout << "List size: " << size << std::endl;
        // test to return size

    int fvalue = list.popBeginning();
    int bvalue = list.popEnd();
    std::cout << fvalue << " popped from front of list and " 
            << bvalue << " popped from back" << std::endl;
        // test to pop from front and back

    fvalue = list.returnHeadValue();
    bvalue = list.returnTailValue();
    std::cout << "Current head: " << fvalue << ", Current tail: " << bvalue << std::endl;
        // test to return current head and tail value

    size = list.returnSize();
    std::cout << "List size: " << size << std::endl;

    return 0;
}