#include<iostream>
using namespace std;

class sky
{
	public:
	sky()
	{
		cout<<"THIS IS THE CONSTRUCTOR "<<endl;
	}
	
	sky(int a,int b)
	{
		cout<<"THE SUB VALUE WILL BE "<<(a-b)<<endl;
	}
};

class ground
{
	public:
	ground()
	{
		cout<<"THIS IS SECOND CONSTRUCTOR "<<endl;
	}
	
	ground(int c,int d)
	{
		cout<<"THE SUM OF TWO VALUE WILL BE "<<(c+d)<<endl;
	}
};

class room
{
	public:
	room()
	{
		cout<<"THIS IS THIRD CONSTRUCTOR "<<endl;
	}
	
	room(int e,int f)
	{
		cout<<"the mul of two value will be "<<(e*f)<<endl;
	}
};

class home
{
	public:
	home()
	{
		cout<<"THIS IS FOURTH CONSTRUCTOR "<<endl;
	}
	
	home(int x,int y)
	{
		cout<<"THE DIV OF TWO VALUE WILL BE "<<(x/y)<<endl;
	}
};

main()
{
	sky s1,s2(50,40);
	
	ground g1,g2(50,40);
	
	room r1,r2(2,6);
	
	home h1,h2(20,4);
}

