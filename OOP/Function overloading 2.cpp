#include<iostream>
using namespace std;

class Display
{
	public:
		int fun(int x,char y)
		{
			cout<<"Enter the value for integer x:";
			cin>>x;
			
			cout<<"Enter the value for character y:";
			cin>>y;
			
			cout<<"The integer value is:"<<x<<endl;
			cout<<"The character value is:"<<y<<endl;
			
			cout<<"<*******************************>"<<endl;
		}
		
		
		
		int fun(char y,int x)
		{
			
			cout<<"Enter the value for character y:";
			cin>>y;
			
			cout<<"Enter the value for integer x:";
			cin>>x;
			
			cout<<"The integer value is:"<<y<<endl;
			
			cout<<"The character value is:"<<x<<endl;
			
		}
};

main()
{
	int x;
	char y;
	Display d1,d2;
	d1.fun(x,y);
	d2.fun(y,x);
}
