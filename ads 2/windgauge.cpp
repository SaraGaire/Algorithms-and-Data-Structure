#include "windgauge.h"
#include <iostream>

WindGauge::WindGauge(int period) : period(period) {}

void WindGauge::currentWindSpeed(int speed) {
    history.push_front(speed);
    int size = history.size();
    if (size > period) {
        history.pop_back();
    }
}   
    // checks for size of hisotry deque
    // if > than period
    // removes the oldest elem from back
    // pushes new elem from front

int WindGauge::highest() const {
    int highest = history[0];
    for(size_t i = 0; i < history.size(); i++) {
        if(history[i] > highest) {
            highest = history[i];
        }
    }
    return highest;
}
    // returns highest

int WindGauge::lowest() const {
    int lowest = history[0];
    for(size_t i = 0; i < history.size(); i++) {
        if(history[i] < lowest) {
            lowest = history[i];
        }
    }
    return lowest;
}
    // returns lowest

int WindGauge::average() const {
    int average = 0;
    int sum = 0;
    for(size_t i = 0; i < history.size(); i++) {
        sum += history[i];
    }
    average = sum/history.size();
    return average;
}
    // returns avergae

void WindGauge::dumpfunction() {
    std::cout<< "The Highest speed was: " << highest() << std::endl;
    std::cout<< "The Lowest speed was: " << lowest() << std::endl;
    std::cout<< "The Avergae speed was: " << average() << std::endl;
}
    // dump function to print lowest, highest and average

void WindGauge::print() {
    std::deque<int>::iterator itr;
    for(itr = history.begin(); itr != history.end(); itr++) {
        std::cout << *itr << " ";
    }
    std::cout<<std::endl;
}