#include <iostream>
using namespace std;
int main(){
    while(true){
        int i,j,k,num;
        cin>>i>>j>>k;
        for(num=10;num<=100;num++){
            if(num%3==i&&num%5==j&&num%7==k){
                cout<<num<<endl;
                break;
            }
        }
        if(num==101)
            cout<<"No answer"<<endl;
    }
    return 0;
}