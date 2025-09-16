/* generate 5 pseudo random numbers between a and b */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i;
	a=5;
	b=10;

	for (i=0;i<5;i++)
	{
		printf("%d ",(rand()%(b-a+1)+a));
       /* rand returns a pseudo-random number in the range of 0 to RAND_MAX. */
	}
printf("\n");

return 0;

}

