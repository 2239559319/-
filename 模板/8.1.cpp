//函数模板 
//函数重载时优先调用普通全局函数 
#include<iostream>
#include<string>
using namespace std;
template <class Type>
Type GetMax(Type a,Type b,Type c);
int main()
{
	string str1("qqq"),str2("wwww"),str3("eee");
	cout<<GetMax(12,52,24)<<endl;
	cout<<GetMax(str1,str2,str3)<<endl;
	return 0;
}
template <class Type>
Type GetMax(Type a,Type b,Type c)
{
	Type t;
	t=a>b?a:b;
	return t>c?t:c;	
}
