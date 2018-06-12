/*Lake counting
 * 在一个大小为N*M的园子，雨后积起了水，八连通的积水被认为是联通在一起的，请求出园子里总共有多少水洼
 * （八连通指的是下图中相对W的*的部分）
 *                  ***
 *                  *W*
 *                  ***
 * 限制条件
 * N,M<100
 * 输入
 * N=10,M=12
 * 园子如下图（W表示积水，*表示没有积水）
 *              W********WW*
 *              *WWW*****WWW
 *              ****WW***WW*
 *              *********WW*
 *              *********W**
 *              **W******W**
 *              *W*W******W*
 *              W*W*W*****W*
 *              *W*W******W*
 *              **W*******W*
 * 输出
 * 3
 */
#include <iostream>
using namespace std;
void dfs(char a[100][100],int M,int N,int x,int y){
    //将现在所在位置替换为*
    a[x][y]='*';
    //循环遍历八个方向
    for(int dx=-1;dx<=1;dx++)
        for(int dy=-1;dy<=1;dy++){
            int nx=x+dx,ny=y+dy;
            if(nx>=0&&ny>=0&&nx<=M-1&&ny<=N-1&&a[nx][ny]=='W')
                dfs(a,M,N,nx,ny);
        }
}
int count(char a[100][100],int M,int N){
    int res=0;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++){
            if(a[i][j]=='W'){
                dfs(a,M,N,i,j);
                res++;
            }
        }
    return res;
}
int main(){
    char a[100][100];
    int M,N;
    cin>>M>>N;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin>>a[i][j];
    cout<<count(a,M,N)<<endl;
    return 0;
}