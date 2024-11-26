#include<iostream>
using namespace std;
main()
{
	int x,*p;
	p=&x;
	
	cout<<"Enter the value to find the address of it:";
	cin>>x;
	
	cout<<"The value of x is :"<<x<<endl;
	cout<<"The address of x is:"<<&x<<endl;
	
	cout<<"The address is:"<<p<<endl;
	cout<<"The variable value is:"<<*p<<endl;
	
}
