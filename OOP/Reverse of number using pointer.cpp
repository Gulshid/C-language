#include<iostream>
using namespace std;
main()
{
	float arr[6],*ptr;
	cout<<"Enter the six value:";
	for(int a=0; a<=5; a++)
	{
		cin>>arr[a];
		
	}
	ptr=&arr[5];	
	cout<<"The value in reverse form:";
	for(int b=5; b>=0; b-- )
	{
		cout<<*ptr--<<",";
	}
}
