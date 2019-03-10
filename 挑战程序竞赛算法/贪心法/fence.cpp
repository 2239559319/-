/*				fence repair
	将一块很长的木板切割成N块，准备切成的木板长度为L1,L2,...LN,未切割前的木板长度恰好 
	为切割后的木板长度的总和。每次切断木板时，需要的开销为这块木板的长度。例如长度为21
	的木板切成长为13和8的板时，开销为21。再将长度为13的板切成5和8的板时，开销为13，于是合计
	开销是34，求出按目标要求将木板切完后最小的开销是多少 
	限制条件
		1<=N<=20000
		0<=Li<=50000
	样例
	
	输入
		N=3,L={8,5,8}
	输出
		34 
*/

#include<iostream>
#include<algorithm>
using namespace std;

void solve(int L[],int N)
{
	long long ans=0;
	while(N>1)						//直到计算到木板为1块时为止 
	{
		int mii1=0,mii2=1;			//求出最短的板mii1和次短的板mii2 
		if(L[mii1]>L[mii2])
			swap(mii1,mii2);
		for(int i=2;i<N;i++)
		{
			if(L[i]<L[mii1])
			{
				mii2=mii1;
				mii1=i;
			}
			else if(L[i]<L[mii2])
			{
				mii2=i;
			}
		}
		
		int t=L[mii1]+L[mii2];			//将两块板合并 
		ans+=t;
		
		if(mii1==N-1)
			swap(mii1,mii2);
		L[mii1]=t;
		L[mii2]=L[N-1];
		N--;
	}
	cout<<ans<<endl;
}

int main()
{
	int N=3,L[100]={8,5,8};
	solve(L,N);
	return 0;
}
