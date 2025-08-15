#ifndef STACK_H
#define STAK_H

#include <iostream>

template<class T>
class Stack {
private:
    int size; // total size of Stack
    int num_of_elems; // total number of elements in stack
    T* arr; // generic array

public:
    Stack() : size(10), num_of_elems(0) {
        arr = new T[size];
    }
        // default constructor

    Stack(int sz) : size(sz), num_of_elems(0) {
        arr = new T[size];
    }
        // parametric constructor

    Stack(const Stack& other) : size(other.size), num_of_elems(other.num_of_elems) {
        arr = new T[size];
        for(int i = 0; i < num_of_elems; i++) {
            arr[i] = other.arr[i];
        }
    }
        // copy constructor

    bool push(T element) {
        if(num_of_elems == size) {
            return false;
        }
        else {
            arr[num_of_elems] = element;
            num_of_elems++;
            return true;
        }
    }
        // push method

    bool pop(T& out) {
        if(num_of_elems == 0) {
            return false;
        }
        else{
            out = arr[--num_of_elems];
            return true;
        }
    }
        // pop method

    T back(void) {
        if(num_of_elems==0) {
            throw std::out_of_range("Stack is Empty");
        }
        return arr[num_of_elems-1];
    }
        // returns top element from stack
        // if empty throws an error

    int getNumEntries() {
        return num_of_elems;
    }
        // returns total number of elements in stack

    ~Stack() {
        delete[] arr;
    }
        // destructor
};

#endif 