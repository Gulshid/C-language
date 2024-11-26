#include<iostream>
using namespace std;

class hello
{
	private:
	int a,b;
	public:
	int fun()
	{
		cout<<"Enter the value for a and b:";
		cin>>a>>b;
		
		int z=a+b;
		cout<<z;
		return z;
		
		}	
};

main()
{
	hello h;
	cout<<"the addition of two value is:"<<h.fun();
}
