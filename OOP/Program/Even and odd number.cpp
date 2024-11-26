#include<iostream>
using namespace std;
void fun_odd_even()
{
	for(int a=0; a<=10; a++)
	{
		if(a%2==1)
		{
			cout<<"The Number "<<a<<" is odd Number:\t\n";
		}
		else
		if(a%2==0)
		{
			cout<<"The Number "<<a<<" is Even Number:\t\n";
		}
	}
}
main()
{
	fun_odd_even();
}
