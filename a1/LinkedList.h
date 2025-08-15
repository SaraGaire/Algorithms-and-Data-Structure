#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

template <class T>
class node {
public:
    T data;
    node* next;
    node* prev;

    node(const T& value) : data(value), next(nullptr), prev(nullptr) {}
        // default constructor
};
    // node class

template <class T>
class linkedlist {
private:
    node<T>* head;
    node<T>* tail;
    int size;
public:
    linkedlist() : head(nullptr), tail(nullptr), size(0) {};
        // default constructor

    ~linkedlist() {
        while(head!=nullptr) {
            node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
        // destructor

    void pushBeginning(const T& value) {
        node<T>* newnode = new node<T>(value);
        if(head == nullptr) {
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
        size++;
    }
        // push value to front of list

    void pushEnd(const T& value) {
        node<T>* newnode = new node<T>(value);
        if(tail == nullptr) {
            tail = head = newnode;
        }
        else{
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
        size++;
    }
        // push value to end of list

    T popBeginning() {
        if(head == nullptr) {
            throw std::runtime_error("List is empty");
        }
        else {
            node<T>* temp = head;
            head = head->next;
            T pop_value = temp->data;
            delete temp;
            if(head != nullptr) {
                head->prev = nullptr;
            }
            else{
                tail = nullptr;
            }
            size--;
            return pop_value;
        }
    }
        // pop from front of list

    T popEnd() {
        if(tail == nullptr) {
            throw std::runtime_error("List is empty");
        }
        else {
            node<T>* temp = tail;
            tail = tail->prev;
            T pop_value = temp->data;
            delete temp;
            if(tail != nullptr) {
                tail->next = nullptr;
            }
            else {
                head = nullptr;
            }
            size--;
            return pop_value;
        }
    }
        // pop from end of list

    T returnHeadValue() {
        if(head==nullptr) {
            throw std::runtime_error("List is empty");
        }
        return head->data;
    }
        // return current head value

    T returnTailValue() {
        if(tail == nullptr) {
            throw std::runtime_error("List is empty");
        }
        return tail->data;
    }
        // return current tail value

    int returnSize() {
        return size;
    }
        // return list size

    void printList() {
        node<T>* curr = head;
        std::cout<< "Printing List: ";
        while(curr != nullptr) {
            std::cout << curr->data << " ";
            curr = curr->next;
        }
        std::cout << std::endl;
    }
        // print method

};

#endif