#include <stdio.h>
#include "myHeader.h"
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
