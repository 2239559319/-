#include<iostream>
using namespace std;

void show(int *begin,int *end){
    for(int *it=begin;it!=end;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    int a[]={1,2,3,4,5,6},n=6;
    int *begin=a,*end=a+n;
    show(begin,end);
    return 0;
}