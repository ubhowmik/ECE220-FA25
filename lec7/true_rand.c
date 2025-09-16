/* use srand to generate 5 random number between a and b */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a,b,i;
	a=5;
	b=10;
        srand(time(0));
	for (i=0;i<5;i++)
	{
		printf("%d ",(rand()%(b-a+1)+a));
	}
printf("\n");

return 0;

}

