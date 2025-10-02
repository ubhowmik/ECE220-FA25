#include "sort_header.h"
void bubble_sort1(int *a, int size)
{

	int flag, i;
		flag=0;
		while(!flag)
		{
			flag=1;
		for(i=0;i<size-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap_sort(&a[i],&a[i+1]);
				flag=0;
			}
		}
		}
}
