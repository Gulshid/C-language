#include<iostream>
using namespace std;
main()
{
	//Write a C++ program that compute the summation of Array value
	int Array[6]={1,2,3,4,5,6};
	int sum=0;
	for(int i=0; i<=5; i++)
	{
	
		sum=sum+Array[i];
	}
	
	
	cout<<"The summation of Integer value Array is:"<<sum<<endl;
	
}
