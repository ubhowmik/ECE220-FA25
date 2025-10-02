#include "sort_header.h"
void bubble_sort(int *a, int size)
{

	int flag, i;
	do{
		flag=0;
		for(i=0;i<size-1;i++)
		{
			if(a[i]>a[i+1])
			{
				swap_sort(&a[i],&a[i+1]);
				flag=1;
			}
		}
	}while(flag);

}
