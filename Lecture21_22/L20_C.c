#include <stdio.h>
#include <math.h>

//Example: a vector struct in C, which has 2 members: angle and length
typedef struct VectorStruct vector;

struct VectorStruct {
 	double angle;
 	double length;
 };

//function scaleVector to scale the length of a vector
void scaleVector(vector *v, double alpha) {
 	v->length *= alpha;
 }


int main(){
	vector a = {1.0,1};
	vector *d=&a;
	scaleVector(d, 2);		
	printf("d's length is %f, d's angle is %f\n", d->length, d->angle);
      
	d->length=5;
	printf("d's length is %f, d's angle is %f\n", d->length, d->angle);
	return 0;
}
