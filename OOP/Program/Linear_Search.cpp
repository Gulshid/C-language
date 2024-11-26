#include <iostream>
using namespace std;

// Linear search function
int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
	{
        if (arr[i] == target) 
		{
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {2, 4, 5, 10, 7, 8};
    int size = 6;
    int target = 10;

    int result = linearSearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}


