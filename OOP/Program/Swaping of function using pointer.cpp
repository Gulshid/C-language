#include<iostream>
using namespace std;

int fun_pointer_swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	return *y;
}
main()
{
	int x,y;

	cout<<"Enter the value of x :";
	cin>>x;
	cout<<"Enter the value of y:";
	cin>>y;

	
    	fun_pointer_swap(&x,&y);
    	cout<<"The value of x is "<<x<<endl;
    	cout<<"The value of y is "<<y<<endl;
	
}
