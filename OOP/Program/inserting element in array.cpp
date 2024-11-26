#include<iostream>
using namespace std;
main()
{
	int array[10]={1,2,3,4};
	cout<<"Enter the value for inserting..."<<endl;
	for(int i=4; i<=9; i++)
	{
		cin>>array[i];
		
	}
	
	for(int j=0; j<=9; j++)
	{
		cout<<array[j]<<" ";
	}
}
