int partition(int *a,int p,int r)
{
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++)
	{
		if(a[j]<x)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[r],a[i+1]);
	return i+1;
}
void quicksort(int *a,int p,int r)
{
	if(p<r)
	{
		int q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}