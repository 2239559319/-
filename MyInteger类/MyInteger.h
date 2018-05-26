#ifndef _MYINTEGER_H_
#define _MYINTRGER_H_

#include<iostream>
using namespace std;
class MyInteger
{
public:
	MyInteger(int);
	int get();
	bool isEven() const;
	bool isOdd() const;
	bool isPrime() const;
	static bool isEven(int);
	static bool isOdd(int);
	static bool isPrime(int);
	static bool isEven(const MyInteger&);
	static bool isOdd(const MyInteger&);
	static bool isPrime(const MyInteger&);
	bool equal(int) const;
	bool equal(const MyInteger&) const;
	static int parseInt(const string&);
private:
	int value;
};
#endif
