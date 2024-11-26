#include <iostream>
using namespace std;

int Linear_Search(int arr[],int size,int target)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
		
	}
	return -1;
}

main()
{
	int arr[]={1,2,3,5,6};
	int size=5;
	int target=5;
	int result=Linear_Search(arr,size,target);
	if(result!=-1)
	{
		cout<<"Element found at position "<<result<<endl;
	}
	else
	{
		cout<<"Element Not found"<<endl;
	}
}
