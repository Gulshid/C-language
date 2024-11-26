#include<iostream>
using namespace std;
main()
{
	int x,*p;
	cout<<"ENter the value for x:";
	cin>>x;
	
	cout<<"the address of x is "<<&x<<endl;
	p=&x;
	cout<<"The address of x is "<<p<<endl;
	cout<<"The value of x is "<<*p<<endl;
}
