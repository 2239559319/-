/*			字典序最小问题 
	给定长度为N的字符串S，要构造一个长度为N的字符串T。
	起初，T是一个空串，随后反复进行下列任意操作 
		. 从S的头部删除一个字符，加到T的尾部，
		. 从S的尾部删除一个字符，加到T的尾部
	目标是要构造字典序尽可能小的字符串T
	
	限制条件:
		1<=N<=2000
		字符串S只包含大写英文字母
	样例
		输入
			N=6
			S="ACDBCB"
		输出
			ABCBCD 
*/

#include<iostream>
using namespace std;

void solve(string S,int N)				//注意将字符串的每个字符分开处理 
{
	int a=0,b=N-1;
	while(a<=b)
	{
		bool left=false;				//如果左边小就置true
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
