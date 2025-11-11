#include <iostream>
#include<cmath>

//Example: a class in CPP, which has 2 members: angle and length
class vector{
private:
 	double angle;
 	double length;
//Constructor
public:
	vector(double a, double l){
	angle=a;
	length=l;
 	}
//Default Constructor
vector(){angle=0.0; length=0.0;}

//function scaleVector to scale the length of a vector
void scaleVector(double alpha) {
 	length *= alpha;
 }

void printVector()
{
std::cout<<"Vector length is: "<<length<<std::endl;
std::cout<<"Vector angle is: "<< angle<<std::endl;
}

vector operator+(vector b)
{
vector c;
double ax=length*cos(angle);
double bx=b.length*cos(b.angle);
double ay=length*sin(angle);
double by=b.length*sin(b.angle);
c.length=sqrt((ax+bx)*(ax+bx)+(ay+by)*(ay+by));
c.angle=atan((ay+by)/(ax+bx));
return c;
}

};


int main(){
	vector a = {0.50,1};
	vector *d=&a;

// no access to the private member
/*	
	a.length=3;
	d->length=5;
	printf("d's length is %f, d's angle is %f\n", d->length, d->angle);
*/	
//use C++ methods/functions

	d->scaleVector(5.0);
	d->printVector();


vector b = {1.0, 2.0};
vector c = a+b;
	c.printVector();
	return 0;
}
