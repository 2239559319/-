/*
saruman's army
ֱ������N���㣬��i��λ����Xi.���⼸������ѡ�����ɸ��������Ǽ��ϱ�ǡ�
��ÿһ���㣬�����ΪR���ڵ�����������д��б�ǵĵ㣬������Ϊ�������Ϊ0��
�ط���һ������ǵĵ㡣�������������������£�ϣ����Ϊ�������ٵĵ���ӱ�� 
�����ж��ٸ��㱻���ϱ�� 

��������
	1<=N<=1000
	0<=R<=1000
	0<=Xi<=1000
����
���� 
	N=6
	R=10
	X={1,7,15,20,30,50} 
���
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
		int s=X[i++];				//s��û�б����ǵ�������λ��
		while(i<N&&X[i]<=s+R)		//һֱ����ǰ��ֱ����s�ľ������R�ĵ� 
		{
			i++;
		}
		int p=X[i-1];				//p���¼��ϱ�ǵĵ��λ��
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
