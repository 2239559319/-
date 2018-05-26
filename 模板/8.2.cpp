#include<iostream>
#include<string>
using namespace std;
//ÉùÃ÷ÀàÄ£°å 
template <class Type>
class TClass
{
public:
	TClass(Type);
	void SetItem(Type);
	Type GetItem();
private:
	Type m_item;	
};
template <class Type>
TClass<Type>::TClass(Type item)
{
	m_item=item;
}
template <class Type>
void TClass<Type>::SetItem(Type item)
{
	m_item=item;
}
template <class Type>
Type TClass<Type>::GetItem()
{
	return m_item;
}

int main()
{
	TClass<int> obj1(128);
	cout<<obj1.GetItem()<<endl;
	obj1.SetItem(217);
	cout<<obj1.GetItem()<<endl;
	return 0;
}
