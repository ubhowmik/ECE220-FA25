#include <iostream>

//Example: a class in CPP, which has 2 members: angle and length
class vector{
private:
 	double angle;
 	double length;
public:
	vector(double a, double l){
	angle=a;
	length=l;
 }

//function scaleVector to scale the length of a vector
void scaleVector(double alpha) {
 	length *= alpha;
 }

void printVector()
{
std::cout<<"Vector length is: "<<length<<std::endl;
std::cout<<"Vector angle is: "<< angle<<std::endl;
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
	return 0;
}
