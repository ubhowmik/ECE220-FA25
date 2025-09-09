#include<stdio.h>
#include<math.h>
#define pi 3.1415926535

int main()
{
//define variables

	int n, i;
	float xi, w, fx;
	printf("Enter the values of n and w in order\n");
	scanf("%d%f",&n,&w);
	for(i=0;i<n;i++)
	{
		xi=(i*pi)/n;
		//fx=(0.2)*cos(xi*w);
		fx=((float)1/5)*cos(xi*w);
		printf("(%f,%f)\n",xi, fx);

	}

	return 0;
}

