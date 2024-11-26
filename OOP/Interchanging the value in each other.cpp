#include<iostream>
using namespace std;
int interchange(int *a1,int *a2)
{
	int temp=*a1;
	*a1=*a2;
	*a2=temp;
	return temp;
}
main()
{
	int a1,a2;
	cout<<"Enter the value for a1 and a2:";
	cin>>a1>>a2;
	
	cout<<"The value of a1:"<<a1<<endl;
	cout<<"The value of a2:"<<a2<<endl;
	
	interchange(&a1,&a2);
	cout<<"after changing the value a1 is :"<<a1<<endl;
	cout<<"after changing the value a2 is :"<<a2<<endl;
	
}
	


