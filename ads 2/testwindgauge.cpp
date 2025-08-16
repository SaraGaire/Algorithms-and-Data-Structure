#include "windgauge.h"
#include <iostream>

int main() {
    WindGauge myWindGauge;
        // create object

    myWindGauge.currentWindSpeed(15);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(12);
    myWindGauge.currentWindSpeed(15);
    myWindGauge.currentWindSpeed(15);

    myWindGauge.dumpfunction();
        // prints dump function

    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(17);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(20);
    myWindGauge.currentWindSpeed(17);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(15);
    myWindGauge.currentWindSpeed(16);
    myWindGauge.currentWindSpeed(20);

    myWindGauge.dumpfunction();
        // prints dump function

    return 0;
}