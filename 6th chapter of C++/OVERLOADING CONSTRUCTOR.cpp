#include<iostream>
using namespace std;

class num
{
	public:
	num()
	{
		cout<<"this is overloading constructor "<<endl;
	}
	
	num(int a,int b,int c,int r)
	{
		cout<<"the value of a="<<a<<endl;
		cout<<"THE VALUE OF b="<<b<<endl;
		cout<<"The vallue of c="<<c<<endl;
		r=a+b+c;
		cout<<"The sum value of r="<<r<<endl;
	}
	
	mark(int d)
	{
		cout<<"THE VALUE OF D="<<d<<endl;
	}
};

main()
{
	num n1,n2(2,3,4,9),n3;
	n3.mark(6);
}
