#include<iostream>
using namespace std;
main()
{
	/*int array[5]={1,2,3};
	for(int a=3; a<=4; a++)
	{
		cin>>array[a];
	}
	for(int a=0; a<=4; a++)
	{
		cout<<array[a]<<" ";
	}*/
	
	
	int array_Element[10]={1,2,4,5};
	int n=5;
	int element=3;
	int pos=2;
	
	for(int i=n; i>pos; i--)
	{
		array_Element[i]=array_Element[i-1];
	}
	
	array_Element[pos]=element;
	n++;
	
	for(int j=0; j<=n; j++)
	{
		cout<<array_Element[j]<<" ";
	}
	
}
