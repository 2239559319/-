/*		��n�����ÿ����ֱ���siʱ�俪ʼ����tiʱ����� 
		����ÿ������㶼����ѡ�������� 
		���ѡ���˲��룬��ô��ʼ���ն�����ȫ�̲��룬���� 
		���빤����ʱ��β����ص�(��ʹ�ǿ�ʼ��˲��ͽ�����˲��Ҳ�����ص�)
		���Ŀ���ǲ��뾡���ܶ�Ĺ�����������ܲ���Ĺ�����
		
		��������
			1<=N<=100000
			1<=si<=ti<=10^9
		����
		����
			n=5,s={1,2,4,6,8},t={3,5,7,9,10}
		���
			3(ѡȡ����1,3,5) 
*/
/*
		ѡȡ����ʱ������Ĺ��� 
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
int solve(int N,int S[MAX_N],int T[MAX_N])			//NΪ�����СҲ�ǹ��������� 
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
