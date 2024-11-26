#include<iostream>
using namespace std;
main()
{
	int arra[10]={1,3,4,5,6};
	int element=2;
	int n=5;
	int pos=1;
	
	for(int a=n; a>pos; a--)
	{
		arra[a]=arra[a-1];
	}
	arra[pos]=element;
	n++;
	
	for(int a=0; a<n; a++)
	{
		cout<<arra[a]<<" ";
	}
}
