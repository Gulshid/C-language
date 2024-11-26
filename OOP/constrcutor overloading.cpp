#include<iostream>
using namespace std;

class rectangle
{
	private:
	int width,height;
	
	public:
	rectangle()
	{
		width=10;
		height=5;
		
		}
		
	rectangle(int w,int h)
	{
		width=w;
		height=h;
		}
		
		int Area()
		{
			return width*height;
			}	
};


main()
{
	rectangle r1,r2(8,5);
	cout<<"The area of 1st is "<<r1.Area()<<endl;
	cout<<"The area of 2nd is "<<r2.Area()<<endl;
}
