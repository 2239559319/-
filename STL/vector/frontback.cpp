#include<iostream>
#include<vector>
using namespace std;

void myprint(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;
}

int main()
{
    vector<int> v(12,3);            //12个3
    v.push_back(111);
    v.push_back(444);
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    myprint(v);
    return 0;
}