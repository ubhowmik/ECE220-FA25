#include <iostream>

class Counter {
private:
    int value;
public:
    Counter(int value = 0) : value(value) {}
    // Pre-increment operator overload
    Counter& operator++() {
        ++value;
        return *this;
    }
    // Post-increment operator overload
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    Counter c1(5);
    std::cout << "Initial value: " << c1.getValue() << std::endl;
    Counter c2 = ++c1;
    std::cout << "After pre-increment: " << c1.getValue() << ", " << c2.getValue() << std::endl;
    Counter c3 = c1++;
    std::cout << "After post-increment: " << c1.getValue() << ", " << c3.getValue() << std::endl;
    return 0;
}


//ref: https://www.ibm.com/docs/en/xl-c-and-cpp-aix/13.1.0?topic=operators-overloading-increment-decrement