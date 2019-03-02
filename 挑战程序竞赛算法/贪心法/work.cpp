/*		有n项工作，每项工作分别在si时间开始，在ti时间结束 
		对于每项工作，你都可以选择参与与否。 
		如果选择了参与，那么自始至终都必须全程参与，此外 
		参与工作的时间段不能重叠(即使是开始的瞬间和结束的瞬间也不能重叠)
		你的目标是参与尽可能多的工作，求最多能参与的工作数
		
		限制条件
			1<=N<=100000
			1<=si<=ti<=10^9
		样例
		输入
			n=5,s={1,2,4,6,8},t={3,5,7,9,10}
		输出
			3(选取工作1,3,5) 
*/
/*
		选取结束时间最早的工作 
*/ 

#include<iostream>
using namespace std;

const int MAX_N=100000;
struct Itv
{
	int first;
	int second;
};

void sort(Itv itv[MAX_N],int N)
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N-i-1;j++)
		{
			if(itv[j].first>itv[j+1].first)
			{
				itv temp=itv[j];
				itv[j]=itv[j+1];
				itv[j+1]=temp; 
			}
		} 
	}
}
int solve(int N,int S[MAX_N],int T[MAX_N])			//N为数组大小也是工作的总数 
{
	Itv itv[MAX_N];
	for(int i=0;i<n;i++)
	{
		itv[i].first=T[i];
		itv[i].second=S[i];
	}
	sort(itv,N);
	
	int ans=0,t=0;
	for(int i=0;i<N;i++)
	{
		if(t<itv[i].second)
		{
			ans++;
			t=itv[i].first;
		}
	}
	return ans;
}

int main()
{
	/**/
}
