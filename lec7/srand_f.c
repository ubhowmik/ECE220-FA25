/* use srand to generate 5 random number between a and b */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i,n;
	a=5;
	b=10;
        printf("please enter srand seed value: ");
	scanf("%d",&n);
	srand(n);
	for (i=0;i<5;i++)
	{
		printf("%d ",(rand()%(b-a+1)+a));
	}
printf("\n");

return 0;

}

