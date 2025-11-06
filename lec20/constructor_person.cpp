#include <iostream>
#include <cstring>
using namespace std;

class Person{
char name[20];
 int age;

public:

 Person(char const *_name, int _age);
    Person(){};
 void ShowData(){cout<<name<<" "<<age<<endl;}
};
Person::Person(char const *_name, int _age){
 strcpy(name, _name);
 age = _age;
}


int main(){
// Person p = {"Alice", 20};
 Person p("Alice", 20);
 p.ShowData();
 Person P2;
 P2.ShowData();
}