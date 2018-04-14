//自底向上的算法
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int button_up_cut_rod(int *p,int n)
{
	int *r=new int[n+1];
	r[0]=0;
	for(int j=1;j<n+1;j++)
	{
		int q=INT_MIN;
		for(int i=1;i<=j;i++)
			q=max(q,p[i]+r[j-i-1]);
		r[j]=q;
	}
	return r[n];
}
int main()
{
	int a[11]={1,5,8,9,10,17,17,20,24,30};
	cout<<button_up_cut_rod(a,6)<<endl;
	return 0;
}

