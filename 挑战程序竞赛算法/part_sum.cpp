/*深度优先搜索
 * 部分和问题
 * 给定整数a1,a2,an,判断是否可以从中选出若干数，使他们的和恰好为k
 *限制条件
 *1<=n<=20
 * -10^8<=ai<=10^8
 * -10^8<=k<=10^8
 * 输入
 * n=4
 * a={1,2,4,7}
 * k=13
 * 输出
 * Yes
 *
 *n=4
 * a={1,2,4,7}
 * k=15
 * No
 */
#include <iostream>
using namespace std;
bool dfs(int i,int sum,int n,int k,int *a){//n,k为上面描述的值
    //如果前n项都已经计算过了（加到最后进行判断），如果sum是与k相等则Yes
    if(i==n)
        return sum==k;
    //不加a[i]的情况，继续向下搜索
    if(dfs(i+1,sum,n,k,a))
        return true;
    //加上a[i]的情况，继续向下搜索
    if(dfs(i+1,sum+a[i],n,k,a))
        return true;
}
int main(){
    int*a,n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(dfs(0,0,n,k,a))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}