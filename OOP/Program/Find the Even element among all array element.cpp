#include<iostream>
using namespace std;
main()
{
	int array_Even[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"The Even Number in the integers Array:"<<endl;
	cout<<"*****************"<<endl;
	cout<<"The Integers value Array is :";
	for(int i=0; i<=9; i++)
	{
		cout<<array_Even[i]<<" ";
	}
	cout<<"\nThe Even Integers value Array:";
	for(int j=0; j<=9; j++)
	{
		
		if(array_Even[j]%2==0)
		{
			cout<<array_Even[j]<<" ";
		}
	}

}
