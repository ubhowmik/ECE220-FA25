#include<stdio.h>
float fun(float x);
float reimann_int(int n, float a, float b);
int main()
{
  int n=100;
  float a=-1.0f;
  float b=1.0f;
  float s; 
  s=reimann_int(n,a,b);
  printf("The integral of f(x) is %f\n", s);		
  return 0;
}

float reimann_int(int n, float a, float b)
{
     float dx; int i;
     dx=(b-a)/n; float s=0.0;
     float x, y;
     for (i=0;i<n;i++) {
	     x=a+dx*i;
	     y=fun(x);
	     s+=y*dx;
}
return s;
}
float fun(float x)
{
	float y;
	y=x*x+2*x+1;
	return y;
}

