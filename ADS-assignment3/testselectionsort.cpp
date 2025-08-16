#include "selectionsort.h"
#include "fstream"

// test function to test computation time for different sequences
// The data (time taken for n data set) was exported into three text files
// And Matlab was used to plot the graph


int main() {

    std::vector<std::chrono::microseconds> timeArr1, timeArr2, timeAvg;
    std::vector<int> nvalueArr1, nvalueArr2, nvalueAvg;

    for(int n = 10; n <= 2000; n+=10) {
        std::time_t curr_time = std::time(nullptr);
        std::srand(static_cast<unsigned int>(curr_time));

        std::vector<int> arr = randomSequence(n);
        std::vector<int> arr1 = randomSequenceCaseA(n);
        std::vector<int> arr2 = randomSequenceCaseB(n);

        std::chrono::microseconds totalAvgTime(0);
        for(int rep = 0; rep < 5; rep++) {
            totalAvgTime += measureTimeTaken(arr);
        }
        std::chrono::microseconds AvgTime = totalAvgTime / 5;

        // recording time taken for n values in vectors
        nvalueAvg.push_back(n);
        timeAvg.push_back(AvgTime);
        nvalueArr1.push_back(n);
        timeArr1.push_back(measureTimeTaken(arr1));
        nvalueArr2.push_back(n);
        timeArr2.push_back(measureTimeTaken(arr2));
    }
        
        // writing the data into text files

    std::ofstream outputFile("Arr.txt");
    if (outputFile.is_open()) {
        for (size_t i = 0; i < timeAvg.size(); ++i) {
            outputFile << timeAvg[i].count() << " " << nvalueAvg[i] << std::endl;
        }
        outputFile.close();
        std::cout << "Data exported successfully." << std::endl;
    } else {
        std::cerr << "Unable to export data." << std::endl;
        return 1;
    }

    std::ofstream outputFile1("Arr1.txt");
    if (outputFile1.is_open()) {
        for (size_t i = 0; i < timeArr1.size(); ++i) {
            outputFile1 << timeArr1[i].count() << " " << nvalueArr1[i] << std::endl;
        }
        outputFile1.close();
        std::cout << "Data A exported successfully." << std::endl;
    } else {
        std::cerr << "Unable to export data." << std::endl;
        return 1;
    }

    std::ofstream outputFile2("Arr2.txt");
    if (outputFile2.is_open()) {
        for (size_t i = 0; i < timeArr2.size(); ++i) {
            outputFile2 << timeArr2[i].count() << " " << nvalueArr2[i] << std::endl;
        }
        outputFile2.close();
        std::cout << "Data B exported successfully." << std::endl;
    } else {
        std::cerr << "Unable to export data." << std::endl;
        return 1;
    }

    return 0;
}