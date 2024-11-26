#include<iostream>
using namespace std;

void fibanocci(int n)
{
	int a=0,b=1;
	cout<<"The Fibanocci Sequence of "<<n<<":"<<endl;
	while(a<=n)
	{
		cout<<a<<" ";
		int next=a+b;
		a=b;
		b=next;
	}
	cout<<endl;
}

main()
{
	int n;
	cout<<"Enter the fibanocci squence value:";
	cin>>n;
	
	fibanocci(n);
}
