#include<iostream>
using namespace std;

main()
{
	//Write a C++ program that accapt ten 10 value in user to running time and display it sum.
	int Array[10];
	int sum=0;
	cout<<"Enter the value for array..."<<endl;
	for(int i=0; i<=9; i++)
	{
		cin>>Array[i];
	}
	
	for(int j=0; j<=9; j++)
	{
		sum=sum+Array[j];
	
	}
	
	cout<<"The Summation of Array value is :"<<sum<<endl;
}
