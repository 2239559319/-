/*����1-n������ 
*/
#include<iostream>
#include<cstdio>
using namespace std;
void print_permutation(int n,int *A,int cur){
	if(cur==n){						//�ݹ�߽� 
		for(int i=0;i<n;i++)
			printf("%d ",A[i]);
		printf("\n");
	}
	else
		for(int i=1;i<=n;i++){		//������A[cur]�����������i 
			int ok=1;
			for(int j=0;j<cur;j++)	//����i�Ƿ���ǰ����ֹ� 
				if(A[j]==i)
					ok=0;
			if(ok){
				A[cur]=i;
				print_permutation(n,A,cur+1);	//������һ��λ�� 
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
