#include <iostream>
using namespace std;

class Rectangle {
   public:
      int length, width;

      // Default constructor (no parameters)
      Rectangle() {
         length = 1;
         width = 1;
      }

      // Constructor with one parameter (square)
      Rectangle(int side) {
         length = side;
         width = side;
      }

      // Constructor with two parameters (rectangle)
      Rectangle(int l, int w) {
         length = l;
         width = w;
      }

      // Method to display the area of the rectangle
      void displayArea() {
         cout << "Area: " << length * width << endl;
      }
};

int main() {
   // Using different constructors
   Rectangle rect1;          // Default constructor
   Rectangle rect2(5);       // Constructor with one parameter
   Rectangle rect3(5, 3);    // Constructor with two parameters

   rect1.displayArea();
   rect2.displayArea();
   rect3.displayArea();

   return 0;
}