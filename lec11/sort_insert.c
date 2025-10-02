void insert_sort(int *a, int size)
{

	int sorted_ind,unsortedItem,unsorted_ind;

	for(unsorted_ind=1;unsorted_ind<size;unsorted_ind++)
	{
		unsortedItem=a[unsorted_ind];
		sorted_ind=unsorted_ind-1;
		while((sorted_ind>=0) && (unsortedItem<a[sorted_ind]))
		{
			a[sorted_ind+1]=a[sorted_ind];
			sorted_ind--;
		}

		a[sorted_ind+1]=unsortedItem;
	}

}
