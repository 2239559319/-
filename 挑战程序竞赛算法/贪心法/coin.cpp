/*	��1Ԫ��5Ԫ��10Ԫ��50Ԫ��100Ԫ��500Ԫ ��Ӳ�Ҹ�C1,C2,C3,C4,C5,C6ö 
	����Ҫ����ЩӲ����֧��AԪ��������Ҫ����öӲ��
	���豾�����ٴ���һ�ֽ� 

	��������
	0<=C1...<=10^9
	0<=A<=10^9 
	
	����
	����
		C1=3,C2=2,C3=1,C4=3,C5=0,C6=2		A=620
	���
		6  (500Ԫ1ö��50Ԫ2ö��10Ԫ1ö��5Ԫ2ö) 
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
