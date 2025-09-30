#include<stdio.h>
void fun1(int ar1[]);
//void fun2(int *ar2);

void fun3(int ar3[3]);

int main()
{
	int arr[3]={1, 2, 3};
	fun1(arr);
	printf("%d\n",arr[1]);
	fun3(arr);
	printf("%d\n",arr[1]);

	return 0;
}

void fun1(int ar1[])
{
	ar1[1]=100;
}

void fun3(int ar3[3])
{
	ar3[1]=200;
}
