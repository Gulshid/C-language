#include <iostream>
using namespace std;

int main()
 {
    int arr[100] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
    int n = 5; // Current size of the array
    int element = 99; // Element to insert
    int position = 2; // Position to insert at (0-indexed)

    // Shift elements to the right
    for (int i = n; i > position; i--) 
	{
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position] = element;
    n++; // Increase array size

    // Print the updated array
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }

    return 0;
}

