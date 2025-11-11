#include <iostream>     // used for IO
#include<cmath>

using namespace std;    // creates textual container for
                        // variables and functions
//Example: a class in CPP, which has 2 members: angle and length
class vector{
protected:
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
cout<<"Vector length is: "<<length<<endl;
cout<<"Vector angle is: "<< angle<<endl;
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

class orthovector: public vector 
 {
 protected:
	   int d;
 public:
	 orthovector(int dir, double l) {  // dir is 0,1,2,3 
                         // indicating right, up, left, down
	   const double halfPI = 1.507963268;
	   d = dir;
	   angle = d*halfPI;
	   length = l;
	 }

	 orthovector() { d = 0; angle = 0.0; length = 0.0; }

	 double hypotenuse(orthovector b);
};

 double orthovector::hypotenuse(orthovector b) {
 	if( (d+b.d)%2 == 0 ) 
           {if (d==b.d)
             return length+b.length;
             else 
                  return abs(length-b.length);
           }

 	return (sqrt( length*length + b.length*b.length ) );
 }

  

int main()
{
 orthovector c(1,1);
 orthovector d(1,4);
 vector e = c+d; //add returns a vector type
 e.printVector();

 double f = c.hypotenuse(d);
 cout << "f hypotenuse is " << f <<endl;
}
