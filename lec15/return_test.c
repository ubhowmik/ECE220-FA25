#include<stdio.h>

int fun(int x);

int main()
{
int x = 5;
printf("%d", fun(x));
return 0;
}

int fun(int x)
{
	return ++x;
}

