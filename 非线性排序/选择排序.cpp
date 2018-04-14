void select_sort(int *a,int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		if(a[min]!=a[i])
		{
			swap(a[min],a[i]);
		}
	}
}