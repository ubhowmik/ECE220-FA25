#include<stdio.h>
#include "sort_header.h"
int main()
{
int array[8]={6,5,3,1,8,7,2,4};
printf("Given Array:\n");
print_sort(array,8);
printf("\n");
//insert_sort(array,8);
//bubble_sort(array, 8);
bubble_sort1(array, 8);
printf("Sorted Array:\n");
print_sort(array,8);
printf("\n");
return 0;
}

