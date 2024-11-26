#include<iostream>
using namespace std;
main()
{
	//Find the factorial of number using for loop
	
	int num;
	int fact=1;
	cout<<"Enter the value for FActorial...";
	cin>>num;
	
	
	
		if(num==0)
		{
			cout<<"The factorial of negative number is not Possible..."<<endl;
		}
		else
		{
			for(int a=1; a<=num; a++)
			{
				fact=fact*a;
			}
			
			
		   cout<<"The FActorial of "<<num<<" is "<<fact<<endl;
	     }
	}
	
