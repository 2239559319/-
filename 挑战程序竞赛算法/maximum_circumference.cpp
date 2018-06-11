/*
有n根棍子，棍子i的长度为ai。想从中选出三根棍子组成周长尽可能长的三角形。输出最大的周长，若无法组成三角形
则输出0
输入
n=5
a={2,3,4,5,10}
输出
12
*/

#include <iostream>
#include <algorithm>
using namespace std;
int solve(int a[],int n){
    int i,j,k,sum,len,perimeter=0;//sum是周长,len是最长棍子的长度,perimeter为所求值(这里用的方法很巧)
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            for(k=j+1;k<n;k++){
                sum=a[i]+a[j]+a[k];
                len=a[i]>a[j]?a[i]:a[j];
                len=len>a[k]?len:a[k];
                if(len<sum-len&&sum>perimeter)
                    perimeter=sum;
            }
    return perimeter;
}
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<solve(a,n)<<endl;
    return 0;
}