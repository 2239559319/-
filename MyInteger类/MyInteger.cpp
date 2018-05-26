#include"MyInteger.h"
MyInteger::MyInteger(int x)
{
	value=x;
}
int MyInteger::get()
{
	return value;
}
bool MyInteger::isEven() const
{
	if(value%2==0)
		return true;
}
bool MyInteger::isOdd() const
{
	if(value%2!=0)
		return true;
}
bool MyInteger::isPrime() const
{
	for(int i=2;i<value;i++)
	{
		if(value%i==0)
			break;
	}
	if(i==value)
		return true;
}

static bool MyInteger::isEven(int x1)
{
	if(x1%2==0)
		return true;
}
static bool MyInteger::isOdd(int x2)
{
	if(x2%2!=0)
		return true;
}
static bool MyInteger::isPrime(int x3)
{
	for(int i=2;i<x3;i++)
	{
		if(x3%i==0)
			break;
	}
	if(i==x3)
		return true;
}

static bool MyInteger::isEven(const MyInteger&z1)
{
	if(z1.get()%2==0)
		return true;
}
static bool MyInteger::isOdd(const MyInteger&z2)
{
	if(z2.get()%2!=0)
		return true;
}
static bool MyInteger::isPrime(const MyInteger&z3)
{
	for(int i=2;i<z3.get();i++)
	{
		if(z3.get()%i==0)
			break;
	}
	if(i==z3.get())
		return true;
}
bool MyInteger::equal(int y1) const
{
	if(y1==value)
		return true;
}
bool MyInteger::equal(const MyInteger&y2) const
{
	if(y2.get()==value)
		return true;
}

static int MyInteger::parseInt(const string&a)
{
	int x;
	stringstream ss;
	ss<<a;
	ss>>x;
	return x;
}
