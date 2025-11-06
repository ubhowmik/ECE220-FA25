#include <iostream>
using namespace std;

int main()
{
 int val = 10;

 int *ptr = &val;// & to get address
 int &ref = val;// & to declare reference
 cout<<val<<endl;
 cout<<*ptr<<endl;
 cout<<ref<<endl;

 ref = 20;
 cout<<val<<endl;
 val = 30;
 cout<<ref<<endl;
}