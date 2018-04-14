//带备忘自顶向下的算法
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int memoized_cut_rod_aux(int *p,int n,int *r)
{
	int q;
	if(r[n]>0)
		return r[n];
	if(n==0)
		q=0;
	else
	{
		q=INT_MIN;
		for(int i=0;i<n;i++)
			q=max(q,p[i]+memoized_cut_rod_aux(p,n-i-1,r));
	}
	r[n]=q;
	return q;
}
int memoized_cut_rod(int *p,int n)
{
	int *r=new int[n+1];
	for(int i=0;i<n+1;i++)
		r[i]=INT_MIN;
	return memoized_cut_rod_aux(p,n,r);
}
int main()
{
	int a[11]={1,5,8,9,10,17,17,20,24,30};
	cout<<memoized_cut_rod(a,5)<<endl;
	return 0;
}
