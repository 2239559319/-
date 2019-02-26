#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> mystack;
    cout<<mystack.empty()<<endl;    //bool empty ( ) const
    mystack.push(3);                //void push ( const T& x );
    mystack.push(2);
    mystack.push(1);
    cout<<mystack.top()<<endl;
    mystack.pop();                  //void pop ( );
    cout<<mystack.top()<<endl;
    cout<<mystack.size()<<endl;     //size_type size ( ) const;
    return 0;
}