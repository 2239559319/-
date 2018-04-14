//不带备忘自顶向下的算法

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int cut_rod(int *p,int n)
{
	if(n==0)
		return 0;
	int q=INT_MIN;
	for(int i=0;i<n;i++)
		q=max(q,p[i]+cut_rod(p,n-i-1));
	return q;
}
int main()
{
	int a[11]={1,5,8,9,10,17,17,20,24,30};
	cout<<cut_rod(a,9)<<endl;
	return 0;
}
