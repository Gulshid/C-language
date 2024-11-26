#include<iostream>
using namespace std;
main()
{
	int a,b,temp;
	cout<<"Enter the value of a:";
	cin>>a;
	
	cout<<"Enter the value of b:";
	cin>>b;
	
	cout<<"The value of a before inter changing is:"<<a<<endl;
	cout<<"The value of b before inter changing is:"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	
	cout<<"The value of a After inter changing is:"<<a<<endl;
	cout<<"The value of b After inter changing is:"<<b<<endl;
}
