#include<iostream>
using namespace std;

class food
{
	private:
	int apple,mango;
	public:
	void m(int a,int b)
	{
		apple=a;
		mango=b;
	}
	
	int f()
	{
		cout<<"the value will be "<<(apple+mango);
	}
};

main()
{
	food f1,f2;
	f1.m(1000,5000);
	f2.f();
}
