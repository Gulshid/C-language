#include<iostream>
using namespace std;
main()
{
	int arr[]={1,2,3,4,5};
	int size=5;
	int max=arr[0];
	
	
	for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i]; 
        }
    }
    
    cout << "Maximum element in the array: " << max << endl;
}
