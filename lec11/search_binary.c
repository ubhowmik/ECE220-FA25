int binary_search(int *a, int size, int key)
{
int l, h, M;
l=0;
h=size-1;

while(h>=l)
{
M=(l+h)/2;
if(key==a[M])
	return M;
else if(key<a[M])
	h=M-1;
else
	l=M+1;
}
return -1;
}


