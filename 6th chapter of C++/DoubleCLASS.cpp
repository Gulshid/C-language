#include<iostream>
using namespace std;

class A
{
	private:
	int x,y;
	public:
		void roll(int a,int b)
		{
			x=a;
			y=b;
		}
		
		int R()
		{
			cout<<"the value is ="<<(x*y)<<endl;
		}
};

class B
{
	private:
	int x,y;
	public:
	void No(int a,int b)
	{
		x=a;
		y=b;
	}	
	
	int L()
	{
		cout<<"the value will be is="<<(x*y)<<endl;
	}
};

main()
{
	A a1,a2;
	B b1,b2;
	
	a1.roll(2,5);
	a2.R();
	
	b1.No(6,8);
	b2.L();
}
