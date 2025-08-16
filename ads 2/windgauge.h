#ifndef WIND_GAUGE
#define WIND_GAUGE

#include <iostream>
#include <deque>

class WindGauge {
public:
    WindGauge(int period = 12);
    void currentWindSpeed(int speed);
    int highest() const;
    int lowest() const;
    int average() const;
    void dumpfunction();
    void print();
private:
    int period;
    std::deque<int> history; // to store wind hisotry in deque
};




#endif