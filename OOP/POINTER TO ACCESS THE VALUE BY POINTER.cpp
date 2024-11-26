#include<iostream>
using namespace std;
main()
{
	int value,*pointer;
	pointer=&value;
	cout<<"Enter the value for value:";
	cin>>value;


	cout<<"The value is :"<<value<<endl;
	cout<<"The value Access by pointer variable is:"<<*pointer<<endl;
}
