// CPP Program to demonstrate the use of copy constructor
// and assignment operator
#include <iostream>
#include <stdio.h>
using namespace std;

class Test {
	int x, y;
public:
	Test(int a, int b){x=a;y=b;}
	Test() {x=0;y=0;}
	
	Test(const Test& t)
	{
		x=t.x; 
		y=t.y;
		cout << "Copy constructor called " << endl;
	}

	Test& operator=(const Test& t)
	{
		x=t.x;
		y=t.y;
		cout << "Assignment operator called " << endl;
		return *this;
	}

	void printTest()
	{
		cout<<"x="<<x<<";"<<"y="<<y<<endl;
	}
	
};

// Driver code
int main()
{
	Test t1(2,3);
	t1.printTest();
	Test t2;
	t2.printTest();
	t2 = t1;
	t2.printTest();
	getchar();
	Test t3 = t1;
        t3.printTest();
	getchar();
	return 0;
}
