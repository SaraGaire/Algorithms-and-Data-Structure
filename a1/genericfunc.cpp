#include <iostream>

class Complex {
private:
    int real;
    int imag;
public:
    Complex(int re, int im) : real(re), imag(im) {}
    
    bool operator==(const Complex& other) const {
        return(real == other.real && imag == other.imag);
    }
};
    // complex class


template <typename T>
int array_search(const T arr[], int size, const T& num) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == num) {
            return i;
        }   
    }
    return -1;
}
    // generic search function

int main() {
    int intarr[] = {1,2,3,4,5,6,7,8,9};
    double doubarr[] = {1.1,2.5,6.7,4.9};
    std::string stringarr[] = {"Apple", "Banana", "Orange"};

    int index;
    index = array_search(intarr, 9, 8);
    if(index == -1) {
        std::cout << "Element not found" << std::endl;
    }
    else{
        std::cout << "Element found in index " << index << " of the array" << std::endl;
    }

    index = array_search(doubarr, 4, 4.9);
    if(index == -1) {
        std::cout << "Element not found" << std::endl;
    }
    else{
        std::cout << "Element found in index " << index << " of the array" << std::endl;
    }

    Complex complexArr[] = {Complex(1,2), Complex(3,4), Complex(7,8)};
    index = array_search(complexArr, 3, Complex(3,4));
    if(index == -1) {
        std::cout << "Element not found" << std::endl;
    }
    else{
        std::cout << "Element found in index " << index << " of the array" << std::endl;
    }
        // test

    return 0;
}