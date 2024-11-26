#include<iostream>
using namespace std;

void  pointer(int *a,int *b)
{
	int *temp=*a;
	*a=*b;
	*b=temp;
}

main()
{
	int x,y,temp;
	cout<<"Enter the value of a:";
	cin>>a;
	
	cout<<"Enter the value of b:";
	cin>>b;
	
	cout<<"The Swaping of variable is:";
	pointer(&a,&b);
}
