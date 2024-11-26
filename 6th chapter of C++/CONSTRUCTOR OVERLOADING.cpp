#include<iostream>
using namespace std;

class room
{
	public:
	room()
	{
		cout<<"This is constructor "<<endl;
	}
	
	room(int a,int b)
	{
		cout<<"the value will be "<<(a+b)<<endl;
	}
	
};

main()
{
	room r1,r2(50,40);
}
