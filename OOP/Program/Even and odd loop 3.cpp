#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter the second interval :";
	cin>>a;
	for(int i=1; i<=a; i++)
	{
		if(i%2==0)
		{
			cout<<"The number "<<i<< " is Even number:\t\n";
			
		}
		else
		if(i%2==1)
		{
			cout<<"The number "<<i<< " is Odd number:\t\n";
		}
	}
}
