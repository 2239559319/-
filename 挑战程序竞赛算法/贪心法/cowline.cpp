/*			�ֵ�����С���� 
	��������ΪN���ַ���S��Ҫ����һ������ΪN���ַ���T��
	�����T��һ���մ�����󷴸���������������� 
		. ��S��ͷ��ɾ��һ���ַ����ӵ�T��β����
		. ��S��β��ɾ��һ���ַ����ӵ�T��β��
	Ŀ����Ҫ�����ֵ��򾡿���С���ַ���T
	
	��������:
		1<=N<=2000
		�ַ���Sֻ������дӢ����ĸ
	����
		����
			N=6
			S="ACDBCB"
		���
			ABCBCD 
*/

#include<iostream>
using namespace std;

void solve(string S,int N)				//ע�⽫�ַ�����ÿ���ַ��ֿ����� 
{
	int a=0,b=N-1;
	while(a<=b)
	{
		bool left=false;				//������С����true
		for(int i=0;a+i<=b;i++)
		{
			if(S[a+i]<S[b-i])
			{
				left=true;
				break;
			}
			else if(S[a+i]>S[b-i])
			{
				left=false;
				break;
			}
		}
		if(left)
			putchar(S[a++]);
		else
			putchar(S[b--]);
	}
	putchar('\n');
}

int main()
{
	int N;
	string S;
	cin>>N>>S;
	solve(S,N);
	return 0;
}
