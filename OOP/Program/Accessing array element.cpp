#include<iostream>
using namespace std;
main()
{
	int array[6]={2,4,6,8,10,12};
	int *ptr=array;
	
	cout<<"The pointer value is "<<*ptr<<" and Address is "<<ptr<<endl;
	++ptr;
	cout<<"After Increment pointer value is "<<*ptr<<" and Address is "<<ptr<<endl;
	--ptr;
	cout<<"After Decrement pointer value is "<<*ptr<<" and address is "<<ptr<<endl;
	cout<<"Acessing all array value using loop**"<<endl;
	for (int a=0; a<=5; a++)
	{
		cout<<*(ptr+a)<<" ";
	}
	
}
