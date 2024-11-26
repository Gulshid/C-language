#include<iostream>
using namespace std;

class A
{
	public:
	void a()
	{
		cout<<"i am the base class "<<endl;
	}

};

class B:public A
{
	public:
	void b()
	{
		cout<<"i am the derived class "<<endl;
	}
	
};

main()
{
	B b1;
	b1.a();
	b1.b();
}
