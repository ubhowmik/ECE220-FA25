#include <iostream>
#include <stack>

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    std::stack<Data> myStack;

    Data data1;
    data1.intValue = 10;
    myStack.push(data1);

    Data data2;
    data2.floatValue = 3.14f;
    myStack.push(data2);

    Data data3;
    data3.charValue = 'A';
    myStack.push(data3);
    
    Data data4;
    data4.intValue = 100;
    myStack.push(data4);
    
    while (!myStack.empty()) {
        Data currentData = myStack.top();
        
        // Check which member is active before accessing
        if (myStack.size() == 1) {
            std::cout << "Char Value: " << currentData.charValue << std::endl;
        } else if (myStack.size() == 2) {
             std::cout << "Float Value: " << currentData.floatValue << std::endl;
        } else {
             std::cout << "Int Value: " << currentData.intValue << std::endl;
        }

        myStack.pop();
    }

    return 0;
}
