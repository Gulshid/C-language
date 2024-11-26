#include<iostream>
using namespace std;
main()
{
	int c,*ptr;
	 ptr=&c;
	cout<<"Enter the value for c:";
	cin>>c;
	
	cout<<"The value of variable c is :"<<c<<endl;
	cout<<"The address of variable c is:"<<&c<<endl;
	
	cout<<"The value of variable c is:"<<*ptr<<endl;
	cout<<"The address of variable c is:"<<ptr<<endl;
	
}inclu

