#include<iostream>
using namespace std;
 
 	
class mark
{
	int x,y;
	public:
	void set(int a, int b)
	{
		x=a;
		y=b;	
	}	
	
	int area()
	{
		cout<<"THE RECTANGLE IS ="<<(x*y);
	}
};
	
	main()
	{
		mark e,t;
		e.set(50,50);
		t.area();
	}
