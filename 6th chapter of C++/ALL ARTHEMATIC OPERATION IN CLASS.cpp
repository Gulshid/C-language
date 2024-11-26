#include<iostream>
using namespace std;


class sum
{
	public:
	int add(int a,int b)
	{
		cout<<"The addition of value a and b equal to="<<a+b<<endl;
	}	
};


class sub
{
	public:
	int s(int c,int d)	
	{
		cout<<"the sub of two value is="<<c-d<<endl;
	}
};

class mul
{
	public:
	int m(int v,int w)
	{
		cout<<"the mul of two value is="<<v*w<<endl;
	}	
};


class div: public add,s,m
{
	public:
	int d(int x,int y)
	{
		cout<<"the dividon of two value is="<<x/y<<endl;
	}	
};
main()
{
;
	div d1;
	
	cout<<d1.add(2,3);
	cout<<d1.s(10,20);
	cout<<d1.m(5,10);
	cout<<d1.d(50,10);
}
