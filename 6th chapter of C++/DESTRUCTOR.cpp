#include<iostream>
using namespace std;

class A
{
	public:
	A()
	{
		cout<<"this is constructor "<<endl;
	}
	
	~A()
	{
		cout<<"this is destructor "<<endl;
	}
};

main()
{
	A a1;
}
