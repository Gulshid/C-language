#include <iostream>
#include <vector>
#include <algorithm>  

using namespace std;

int sequentialSearch(const vector<int>& list, int target)
 {
    for (size_t i = 0; i < list.size(); i++) 
	{
        if (list[i] == target) 
		{
            return i;
        }
    }
    return -1;
}

int binarySearch(const vector<int>& list, int target)
 {
    int low = 0, high = list.size() - 1;
    while (low <= high)
	 {
        int mid = low + (high - low) / 2;
        if (list[mid] == target) 
		{
            return mid;
        }
        if (list[mid] < target) 
		{
            low = mid + 1;
        } else
	    {
            high = mid - 1;
        }
    }
    return -1;
}

int main() 
{
    
    int arr[] = {23, 12, 9, 10, 11, 89, 78, 66, 88};
    vector<int> list(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int target1 = 89;

    int seqIndex = sequentialSearch(list, target1);
    cout << "Sequential Search for " << target1 << ": ";
    if (seqIndex != -1)
	 {
        cout << "Found at index " << seqIndex << endl;
    } else 
	{
        cout << "Not found" << endl;
    }

    sort(list.begin(), list.end());

    int binIndex = binarySearch(list, target1);
    cout << "Binary Search for " << target1 << ": ";
    if (binIndex != -1)
	 {
        cout << "Found at index " << binIndex << endl;
    } else
	 {
        cout << "Not found" << endl;
    }

    int target2 = 19;
    seqIndex = sequentialSearch(list, target2);
    cout << "Sequential Search for " << target2 << ": ";
    if (seqIndex != -1)
	 {
        cout << "Found at index " << seqIndex << endl;
    } else
	 {
        cout << "Not found" << endl;
    }

    binIndex = binarySearch(list, target2);
    cout << "Binary Search for " << target2 << ": ";
    if (binIndex != -1)
	 {
        cout << "Found at index " << binIndex << endl;
    } else 
	{
        cout << "Not found" << endl;
    }

    return 0;
}

