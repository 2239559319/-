//πÈ≤¢≈≈–Ú
#include<iostream>
using namespace std;
void merge(int *a,int p,int q,int r)
{
	int n1=q-p+1,n2=r-q;
	int i,j;
	int *L=new int[n1+1];
	int *R=new int[n2+1];
	for(i=0;i<n1;i++)
		L[i]=a[p+i];
	for(j=0;j<n2;j++)
		R[j]=a[q+j+1];
	L[n1]=1000;
	R[n2]=1000;
	i=0,j=0;
	for(int k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		{
			a[k]=L[i];
			i++;
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
}
void merge_sort(int *a,int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}
int main()
{
	int a[5]={21,3,5,4,12};
	merge_sort(a,0,4);
	for(int i=0;i<5;i++)
		cout<<a[i]<<' ';
	cout<<endl;
	return 0;
}
