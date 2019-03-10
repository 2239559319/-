/*				fence repair
	��һ��ܳ���ľ���и��N�飬׼���гɵ�ľ�峤��ΪL1,L2,...LN,δ�и�ǰ��ľ�峤��ǡ�� 
	Ϊ�и���ľ�峤�ȵ��ܺ͡�ÿ���ж�ľ��ʱ����Ҫ�Ŀ���Ϊ���ľ��ĳ��ȡ����糤��Ϊ21
	��ľ���гɳ�Ϊ13��8�İ�ʱ������Ϊ21���ٽ�����Ϊ13�İ��г�5��8�İ�ʱ������Ϊ13�����Ǻϼ�
	������34�������Ŀ��Ҫ��ľ���������С�Ŀ����Ƕ��� 
	��������
		1<=N<=20000
		0<=Li<=50000
	����
	
	����
		N=3,L={8,5,8}
	���
		34 
*/

#include<iostream>
#include<algorithm>
using namespace std;

void solve(int L[],int N)
{
	long long ans=0;
	while(N>1)						//ֱ�����㵽ľ��Ϊ1��ʱΪֹ 
	{
		int mii1=0,mii2=1;			//�����̵İ�mii1�ʹζ̵İ�mii2 
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
		
		int t=L[mii1]+L[mii2];			//�������ϲ� 
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
