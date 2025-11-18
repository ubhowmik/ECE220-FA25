/*
multiple parameter in list stl c++
You can store multiple pieces of data within a single element of a C++ STL std::list by using composite data types as the list's template parameter. Here are some common approaches: 
Using Structures:
Define a struct that encapsulates the different data types you want to store together.
Create a list of objects of that struct type. 
*/

#include <iostream>
#include <list>
#include <string>

struct MyData {
    std::string name;
    int age;
    double salary;
};

int main() {
    std::list<MyData> dataList;

    dataList.push_back({"Alice", 30, 50000.0});
    dataList.push_back({"Bob", 25, 60000.0});

    for (const auto& item : dataList) {
        std::cout << item.name << ", " << item.age << ", " << item.salary << std::endl;
    }
    return 0;
}