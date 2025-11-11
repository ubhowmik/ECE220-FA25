#include <iostream>
#include <cstring>
using namespace std;

class Person{
char *name;
 int age;

public:

 Person(char const *_name, int _age);
    Person(){};
 void ShowData(){cout<<name<<" "<<age<<endl;}
//~Person();
};
Person::Person(char const *_name, int _age){
name = new char[strlen(_name)+1]; 
strcpy(name, _name);
age = _age;
}

/*
Person::~Person(){
cout<<"destructor is working"<<" "<<name<<endl;
delete []name;
}
*/
int main(){
// Person p = {"Alice", 20};
 Person p("Alice", 20);
 p.ShowData();
 Person P2("tom", 30);
 P2.ShowData();
 Person P3(P2);
 P3.ShowData();
}

