#include <iostream>
using namespace std;

// Binary search function (works on sorted arrays)
int binarySearch(int arr[], int size, int target) {
    int first = 0, last = size - 1;

    while (first <= last) {
        int mid = first + (last - first) / 2; // Avoids overflow for large left + right

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            first = mid + 1;

        // If the target is smaller, ignore the right half
        else
            last = mid - 1;
    }

    // Return -1 if the element is not present in the array
    return -1;
}

int main() {
    // Sorted array
    int arr[] = {2, 4, 5, 10, 12, 15, 20};
    int size = 7;
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
