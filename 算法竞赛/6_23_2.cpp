/*                          字符串得分
 * 给出一个由O和X组成的串（长度为1-80）统计得分。每个O的得分为目前连续出现的O的个数
 * X的得分为0.例如，OOXXOXXOOOO的得分为1+2+0+0+1+0+0+1+2+3
 */
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[80];
    int score[80],sum=0;
    cin>>s;
    for(int i=0;i<strlen(s);i++){
        if(i==0&&s[i]=='X')
            score[i]=0;
        if(i==0&&s[i]=='O')
            score[i]=1;
        if(i>0){
            if(s[i]=='O'&&s[i-1]=='O')
                score[i]=score[i-1]+1;
            if(s[i]=='O'&&s[i-1]=='X')
                score[i]=1;
            if(s[i]=='X')
                score[i]=0;
        }
    }
    for(int i=0;i<strlen(s);i++){
        sum+=score[i];
        cout<<score[i]<<endl;
    }
    cout<<sum<<endl;
    return 0;
}