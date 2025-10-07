#include<stdio.h>
void insertsort_recur(int *a, int size, int unsorted_ind)
{

	int sorted_ind,unsortedItem;
        if (unsorted_ind==size)
		return;
	
        else{
		unsortedItem=a[unsorted_ind];
		sorted_ind=unsorted_ind-1;
		while((sorted_ind>=0) && (unsortedItem<a[sorted_ind]))
		{
			a[sorted_ind+1]=a[sorted_ind];
			sorted_ind--;
		}

		a[sorted_ind+1]=unsortedItem;
	}
	unsorted_ind++;
	insertsort_recur(a,size,unsorted_ind);
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unsorted_ind=1;
    insertsort_recur(arr, n, unsorted_ind);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
   printf("\n");
    return 0;
} 
