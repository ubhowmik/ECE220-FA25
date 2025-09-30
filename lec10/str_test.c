#include<stdio.h>
#define size 5
int main()
{
	char arr[size];
	char arr1[size];
	fgets(arr,size,stdin);
	printf("%s\n",arr);
	scanf("%s",arr1);
	printf("%s\n",arr1);
}
