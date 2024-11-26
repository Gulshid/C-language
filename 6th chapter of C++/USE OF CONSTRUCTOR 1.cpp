#include<iostream>
using namespace std;

class mark
{
	private:
	int x,y;
	public:
	mark(int a,int b)
	{
		x=a;
		y=b;
		
	}
	
	int area()
	{
		cout<<"the value wil be "<<(x*y)<<endl;
	}
	
};

main()
{
	mark a1(2,3);
	mark a2(4,5);
	cout<<a1.area()<<"\n";
	cout<<a2.area();

}
