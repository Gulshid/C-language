#include<iostream>
using namespace std;
main()
{
	int sum,Natural;
	cout<<"Enter the value for loop that you want to sum:";
	cin>>Natural;
	for(int n=1; n<=Natural; n++)
	{
		cout<<n<<" ";
		sum=sum+n;
		
	}
	cout<<"\nthe sum of first natural number is:"<<sum<<endl;

}
