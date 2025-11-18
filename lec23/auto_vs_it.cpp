#include <iostream>
#include <vector>

int main() {
  std::vector<int> my_list = {1, 2, 3, 4, 5};

  // Using auto for range-based for loop
  for (auto element : my_list) {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  // Using auto for iterator
  std::vector<int>::iterator it;
  for (it = my_list.begin(); it != my_list.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // Using auto with initializer lists
  auto another_list = {6, 7, 8}; // `another_list` is an `std::initializer_list<int>`
  for (auto element : another_list) {
    std::cout << element << " ";
  }
  std::cout << std::endl;
}
