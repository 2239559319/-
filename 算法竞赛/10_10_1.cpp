/*生成1-n的排列 
*/
#include<iostream>
#include<cstdio>
using namespace std;
void print_permutation(int n,int *A,int cur){
	if(cur==n){						//递归边界 
		for(int i=0;i<n;i++)
			printf("%d ",A[i]);
		printf("\n");
	}
	else
		for(int i=1;i<=n;i++){		//尝试在A[cur]中填各种整数i 
			int ok=1;
			for(int j=0;j<cur;j++)	//查找i是否在前面出现过 
				if(A[j]==i)
					ok=0;
			if(ok){
				A[cur]=i;
				print_permutation(n,A,cur+1);	//查找下一个位置 
			}
		}
}
int A[1000];
int main(){
	int n;
	cin>>n;
	print_permutation(n,A,0);
	return 0;
}
