#include<iostream>
using namespace std;

class A
{
	public:
		virtual void show()
		{
			cout<<"This is class A of virtual function..."<<endl;
		}
};

class B:public A
{
	public:
	virtual void show ()
	{
		cout<<"This is class B of virtual function..."<<endl;
	}	
	
};

class C: public B
{
	public:
		virtual void show()
		{
			cout<<"This is class C of virtual function..."<<endl;
		}
};


main()
{
	A a1;
	B b1;
	C c1;
	
	A *ptr;
	ptr=&a1;
	ptr->show();
	ptr=&b1;
	ptr->show();
	ptr=&c1;
	ptr->show();
}
