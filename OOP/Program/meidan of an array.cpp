#include <iostream>
#include <algorithm> /
using namespace std;


void removeMedian(int arr[], int& n) {
    
    sort(arr, arr + n);

    
    int medianIndex = (n - 1) / 2; 

    cout << "Median value to remove: " << arr[medianIndex] << endl;

   
    for (int i = medianIndex; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    
    n--;
}

int main() {
    int n;

   
    cout << "Enter the number of elements: ";
    cin >> n;


    int* arr = new int[n];

   
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    removeMedian(arr, n);

  
    cout << "Array after removing median: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    delete[] arr;

    return 0;
}

