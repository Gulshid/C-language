#include<iostream>
using namespace std;
main()
{
	int start,end;
	cout<<"Enter the Start interval:";
	cin>>start;
	cout<<"Enter the End interval:";
	cin>>end;
	
	for(int i=start; i<=end; i++)
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
