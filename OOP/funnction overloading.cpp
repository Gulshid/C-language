#include<iostream>
using namespace std;
int  mul(int a,int b)
{
	int m=a*b;
	return m;
}

float sum(float a,int b)
{
	float s=a+b;
	return s;
}
main()
{
	cout<<"The multiplicaion of two value is "<<mul(1,3)<<endl;
	cout<<"The addition of two value is "<<sum(2.8,3);
}
