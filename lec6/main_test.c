#include<stdio.h>
int main(int argc, char *argv[])
{
	int i;
	printf("number of input arguments %d\n",argc);
	if(argc<3)
	{
		printf("insufficient inputs\n");
		return 2;
	}
else
	for (i=(int)*argv[1];i<=(int)*argv[2];i++)
	{
		printf("%d\n",i);
	}
return 0;
}
