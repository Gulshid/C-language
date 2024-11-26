#include<iostream>
using namespace std;

main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int *ptr=arr;
	cout<<"The value of array is "<<*ptr<<" and address is "<<ptr<<endl;
	ptr++;
	cout<<"After Incrementing the value of array is "<<*ptr<<" and Addrss is "<<ptr<<endl;
	++ptr;
	cout<<"After Incrementing the value of array is "<<*ptr<<" and Addrss is "<<ptr<<endl;
	--ptr;
	cout<<"After Dcrementing the value of array is "<<*ptr<<" and Addrss is "<<ptr<<endl;
	ptr--;
	cout<<"After Decrementing the value of array is "<<*ptr<<" and Addrss is "<<ptr<<endl;
	
	cout<<"***Acessing all value in a array***"<<endl;
	for(int x=0; x<=9; x++)
	{
		cout<<*(ptr+x)<<" ";
	}
}
