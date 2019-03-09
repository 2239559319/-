/*
saruman's army
直线上有N个点，点i的位置是Xi.从这几个点中选择若干个，个他们加上标记。
对每一个点，其距离为R以内的区域里必须有带有标记的点，可以认为与其距离为0的
地方有一个带标记的点。在满足这个条件的情况下，希望能为尽可能少的点添加标记 
至少有多少个点被加上标记 

限制条件
	1<=N<=1000
	0<=R<=1000
	0<=Xi<=1000
样例
输入 
	N=6
	R=10
	X={1,7,15,20,30,50} 
输出
	3 
*/

#include<iostream>
#include<algorithm>
using namespace std;

void solve(int N,int R,int X[])
{
	sort(X,X+N);
	int i=0,ans=0;
	while(i<N)
	{
		int s=X[i++];				//s是没有被覆盖的最左点的位置
		while(i<N&&X[i]<=s+R)		//一直向右前进直到距s的距离大于R的点 
		{
			i++;
		}
		int p=X[i-1];				//p是新加上标记的点的位置
		while(i<N&&X[i]<=p+R)
		{
			i++;
		}
		ans++;
	}
	cout<<ans<<endl;
}

int main()
{
	int N=6,R=10;
	int X[N]={1,7,15,20,30,50};
	solve(N,R,X);
	return 0;
}
