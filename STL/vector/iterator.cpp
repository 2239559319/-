#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(2,2);
    v.push_back(12);
    v.push_back(5);
    vector<int>::iterator it;
    for(it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}