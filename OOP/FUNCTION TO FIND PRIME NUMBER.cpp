#include<iostream>
using namespace std;

int isprime(int num)
{
	
	if(num%2==1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

main()
{
	int num;
	cout<<"Enter the value for Num:";
	cin>>num;
	cout<<"The Value will be 0 or 1:"<<isprime(num);
	
}
