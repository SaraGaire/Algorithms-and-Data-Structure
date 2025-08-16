#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <vector>
#include <iostream>
#include <ctime>
#include <chrono>

// header file for the implementation of selection sort

void selectionsort(std::vector<int>& arr) {
    for(size_t i = 0; i < arr.size(); i++) {
        int pos = i;
        int smallest = arr[i];
        for(size_t j = i+1; j < arr.size(); j++){
            if(arr[j] < smallest) {
                smallest = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = smallest;
        arr[pos] = temp;
    }
}

// random sequence generator function

std::vector<int> randomSequence(int n) {
    std::vector<int> sequence;
    for(int i = 0; i < n; i++) {
        sequence.push_back(rand() % 50);
    }
    return sequence;
}

// Case A sequence generator

std::vector<int> randomSequenceCaseA(int n) {
    std::vector<int> sequence;
    sequence.push_back(n-1); // pushes n-1 first
    for(int i = 0; i < n-1; i++) {
        sequence.push_back(i);
            // then pushes an ordered sequence
    }
    return sequence;
}

// Case B sequence generator

std::vector<int> randomSequenceCaseB(int n) {
    std::vector<int> sequence;
    for(int i = 0; i < n; i++) {
        sequence.push_back(i);
    }
    return sequence;
}

// Computation Time measurement function 

std::chrono::microseconds measureTimeTaken(std::vector<int> &arr) {
    std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();
    selectionsort(arr);
    std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
    std::chrono::microseconds totalTime = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
    return totalTime;
}

#endif