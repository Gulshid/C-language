#include<iostream>
using namespace std;

class A
{
	public:
	virtual void show()
	{
		cout<<"Base class"<<endl;
	}
};

class B:public A
{
	public:
		virtual void show()
	{
		cout<<"derived class"<<endl;
	}
		
};

main()
{
	A a1;
	B b1;
	
	A *ptr;
	ptr=&a1;
	ptr->show();
	
	ptr=&b1;
	ptr->show();
	
	
}


