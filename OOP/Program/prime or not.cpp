#include<iostream>
using namespace std;
main()
{
	//Check whether the number is prime or not
	int num;
	bool prime=true;
	
	cout<<"Enter the value for num to check prime number...";
	cin>>num;
	
	if(num==0||num==1)
	{
		prime= false;
	}
	
	for(int i=2; i<=num/2; i++)
	{
		if(num%i==0)
		{
			prime=false;
			break;
		}
	}
	
	if(prime)
	{
		cout<<"the Number "<<num<<" is prime number..."<<endl;
		
	}
	
	else
	{
		cout<<"The Number "<<num<<" is not a prime number..."<<endl;
	}
}
