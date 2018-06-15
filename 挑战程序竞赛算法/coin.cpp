/*贪心算法                                  硬币问题
 * 有1元，5元，10元，50元，100元，500元的硬币各c1,c5,c10,c50,c100,c500枚。现在要用这些硬币来支付A元，最少需要
 * 多少枚硬币？假定本题至少存在一种支付方案
 * 限制条件
 * 0<=c1,c5,c10,c50,c100,c500<=10^9
 * 0<=A<=10^9
 * 输入
 * c1=3,c5=2,c10=1,c50=3,c100=0,c500=1,A=620
 * 输出
 *6
 */
#include <iostream>
#include <algorithm>
using namespace std;
int solve(int a[],int b[],int A){      // a表示硬币面值，b表示硬币个数,A表示要买的总钱
    int ans=0;
    for(int i=5;i>=0;i--){
        int t=min(A/a[i],b[i]);         //从面值最大的选择开始
        A-=t*a[i];
        ans+=t;
    }
    return ans;
}
int main(){
    int a[6]={1,5,10,50,100,500};
    int b[6]={3,2,1,3,0,2};
    int A=620;
    cout<<solve(a,b,A)<<endl;
    return 0;
}