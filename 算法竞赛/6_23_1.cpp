#include <iostream>
using namespace std;
int main(){
    int i,j,k,num;
    for(i=1;i<10;i++)
        for(j=0;j<10;j++)
            for(k=0;k<10;k++){
                num=i*i*i+j*j*j+k*k*k;
                if(num==i*100+j*10+k)
                    cout<<num<<endl;
            }
    return 0;
}