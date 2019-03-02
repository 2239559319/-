/*	有1元，5元，10元，50元，100元，500元 的硬币各C1,C2,C3,C4,C5,C6枚 
	现在要用这些硬币来支付A元，最少需要多少枚硬币
	假设本题至少存在一种解 

	限制条件
	0<=C1...<=10^9
	0<=A<=10^9 
	
	样例
	输入
		C1=3,C2=2,C3=1,C4=3,C5=0,C6=2		A=620
	输出
		6  (500元1枚，50元2枚，10元1枚，5元2枚) 
*/

#include<iostream>
#include<algorithm>
using namespace std;

const int V[6]={1,5,10,50,100,500};

int solve(int C[6],int A)
{
	int ans=0;
	for(int i=5;i>=0;i--)
	{
		int t=min(A/V[i],C[i]);
		A-=t*V[i];
		ans+=t;
	}
	return ans;
}

int main()
{
	int C[6],A;
	for(int i=0;i<6;i++)
	{
		cin>>C[i];
	}
	cin>>A;
	cout<<solve(C,A)<<endl;
	return 0;
}
