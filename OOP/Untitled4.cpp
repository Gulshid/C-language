#include<iostream>
using namespace std;

class A{
	public:
		virtual void show()
		{
			cout<<"BAse class"<<endl;
		}
};

class B:public A{
	public:
		virtual void show()
		{
			cout<<"Derived class"<<endl;
		}
};
main()
{
	A *ptr;
	A a1;
	B b1;
	ptr=&a1;
	ptr->show();
	
	ptr=&b1;
	ptr->show();
}

