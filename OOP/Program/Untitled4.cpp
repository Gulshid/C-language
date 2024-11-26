#include <iostream>
using namespace std;

main()
{
	int arr[]={2,3,4,5,6};
	int size=5;
	int target=5;
	for(int i=1; i<=size; i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return -1;
	
}
