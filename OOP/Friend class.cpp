#include<iostream>
using namespace std;

class X
{
	private:
		int a=8,b=2;
		
		public:
		/*	void display()
			{
				cout<<"The value of a is "<<a<<endl;
				cout<<"The value of b is "<<b<<endl;
			}
		*/	
			friend class Y;
};


class Y
{
	public:
		void sum(X r)
		{
		
				cout<<"The sum of these number by the help of friend class is:"<<r.a+r.b<<endl;
		}
};





main()
{
	X  x1;
	Y y1;
	//x1.display();
	y1.sum(x1);
}
