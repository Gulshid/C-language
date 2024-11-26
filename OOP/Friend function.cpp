#include<iostream>
using namespace std;

class Y;
class X
{
	private:
	int x=100;
	
	friend void Z(X,Y);
};


class Y
{
	private:
		int y=200;
		
	friend void Z(X,Y);
		
};

void Z(X r1, Y r2)
{
	cout<<"Sum of these number is "<<r1.x+r2.y<<endl;
}


main()
{
	X x1;
	Y y1;
	Z(x1,y1);
}
