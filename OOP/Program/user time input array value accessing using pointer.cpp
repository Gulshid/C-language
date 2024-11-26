#include<iostream>
using  namespace std;
main()
{
	int array[5];
	int *pt=array;
	cout<<"Enter the value for array:"<<endl;
	for (int i=0; i<=4; i++)
	{
		cin>>pt[i];
	}
	cout<<"Array value output is:"<<endl;
	for(int j=0; j<=4; j++)
	{
		cout<<pt[j]<<" ";
	}
}
