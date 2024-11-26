#include <iostream>
using namespace std;


int findMaxIndex(int arr[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}
void insertBeforeMax(int*& arr, int& n, int newValue) {
  
    int maxIndex = findMaxIndex(arr, n);

    int* newArr = new int[n + 1];

   
    for (int i = 0; i < maxIndex; i++) {
        newArr[i] = arr[i]; 
    }

    newArr[maxIndex] = newValue;  

    for (int i = maxIndex; i < n; i++) {
        newArr[i + 1] = arr[i]; 
    }

    n++;

    delete[] arr;

    arr = newArr;
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

   int newValue;
    cout << "Enter the new value to insert: ";
    cin >> newValue;

    
    insertBeforeMax(arr, n, newValue);

   
    cout << "Array after inserting the new value: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

   
    delete[] arr;

    return 0;
}

