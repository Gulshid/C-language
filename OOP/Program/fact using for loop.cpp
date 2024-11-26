#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter the value for factorial:";
	cin>>n;
	
	double long fact=1;
	for(int i=1; i<=n; i++)
	{
		fact=fact*i;
	}
	
	cout<<"The fact of "<<n<<" is "<<fact<<endl;
}
