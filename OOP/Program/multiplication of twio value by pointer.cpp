#include<iostream>
using namespace std;
int fun_pointer(int *a,int *b,int *mul)
{
	cout<<"The value of a is "<<*a<<endl;
	cout<<"The value of b is "<<*b<<endl;
	*mul=*a * *b;
	cout<<"******************************"<<endl;
	cout<<"The Multiplication of two value is:"<<*mul<<endl;
}


main()
{
	int a,b,mul;
	cout<<"Enter the value for a:";
	cin>>a;
	
	cout<<"Enter the value for b:";
	cin>>b;
	
	cout<<"The Output of function by the pointer is:"<<fun_pointer(&a,&b,&mul)<<endl;
}
