// nxn Identity Matrix printing

#include<stdio.h>
int main()
{
	int i, j;
	int size=4;
	int stop=2;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if (i==j)
				printf("%d ", 1);
			else
				printf("%d ",0);
			if(i==stop && j==stop)
				break;
		}

		printf("\n");

		if(i==stop)
			break;
	}
return 0;
}
