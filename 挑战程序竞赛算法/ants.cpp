/*n只蚂蚁以每秒1cm的速度在长为L的竿子上爬行。当蚂蚁爬到竿子的顶端时就会掉落
 * 由于竿子太细，两只蚂蚁相遇时，他们不能交错通过，只能各自反向爬回去。对于每只蚂蚁，
 * 我们知道他距离竿子左端的距离为xi,但不知道他当前的朝向。请计算所有蚂蚁落下竿子所需的
 * 最短时间和最长时间
 * 限制条件
 * 1<=L<=10^6
 * 1<=n<=10^6
 * 0<=xi<=L
 * 输入
 * L=10
 * n=3
 * x={2,6,7}
 * 输出
 * min=4
 * max=8
 *
 */
#include <iostream>
#include <algorithm>
using namespace std;
int max_time(int L,int n,int x[]){
    int max_t=0,i;
    for(i=0;i<n;i++)
        max_t=max(max_t,max(x[i],L-x[i]));//这里的用法很巧
    return max_t;
}
int min_time(int L,int n,int x[]){
    int min_t=0,i;
    for(i=0;i<n;i++)
        min_t=max(min_t,min(x[i],L-x[i]));//注意在这里是求距离最大的离端点的距离
    return min_t;
}
int main(){
    int L,n;
    int *x=new int[n];
    cin>>L>>n;
    for(int i=0;i<n;i++)
        cin>>x[i];
    cout<<max_time(L,n,x)<<endl;
    cout<<min_time(L,n,x)<<endl;
    return 0;
}