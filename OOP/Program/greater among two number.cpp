#include<iostream>
using namespace std;
main()
{
	int x,y;
	cout<<"Program Started..."<<endl;
	cout<<"Enter the value for x:";
	cin>>x;
	
	cout<<"Enter the value for y:";
	cin>>y;
	
	if(x>y&&y<x)
	{
		cout<<"The  number "<<x<<" is greater number..."<<endl;
	}
	else
	if(x<y&&y>x)
	{
		cout<<"The number "<<y<<" is greater number..."<<endl;
	}
	cout<<"Program Ended..."<<endl;
}
