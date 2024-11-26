#include<iostream>
using namespace std;
main()
{
	int n;
	int firstvalue,lastvalue;
	cout<<"Enter the value that you want a table:";
	cin>>n;
	
	cout<<"Enter the first limit of table:";
	cin>>firstvalue;
	
	cout<<"Enter the last limit of table: ";
	cin>>lastvalue;
	
	for(int i=firstvalue; i<=lastvalue; i++)
	{
		cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
}
