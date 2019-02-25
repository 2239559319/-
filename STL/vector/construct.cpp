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
    vector<int> first;              //empty
    vector<int> second(4,100);      //four ints with value 100
    vector<int> third(second.begin(),second.end()); //iterating through second
    vector<int> fouth(third);

    int myints[]={16,2,77,29};
    vector<int> fifth(myints,myints+sizeof(myints)/sizeof(int));
    myprint(fifth);
    return 0;
}