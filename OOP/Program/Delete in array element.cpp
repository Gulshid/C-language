#include<iostream>
using namespace std;
main()
{
	int arr[5]={1,2,3,4,5};
	int size=5;
	int pos;
	
	cout<<"The Orignal Element in Array is:"<<endl;
	for(int a=0; a<=size; a++)
	{
		cout<<arr[a]<<" ";
	}
	cout<<"\nEnter the position that you delete in Array:"<<endl;
	cin>>pos;
	
	if(pos>=0 && pos<size)
	{
		for(int i=pos; i<size-1; i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
		
		
	cout<<"After Changing The Array Element is:"<<endl;
		for(int j=0; j<size; j++)
		{
			cout<<arr[j]<<" ";
		}
		
	}
}
