#include<iostream>
using namespace std;
int fun_pointer_sum(int *x,int *y,int *sum)
{
	*sum=*x+*y;
	return *sum;
}
main()

{
	int x,y,sum;
	cout<<"Enter the value for x is ";
	cin>>x;
	
	cout<<"Enter the value for y is ";
	cin>>y;
	
	fun_pointer_sum(&x,&y,&sum);
	cout<<"The value of two variable is "<<sum<<endl;
}
