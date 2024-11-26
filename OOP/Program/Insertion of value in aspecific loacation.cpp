#include <iostream>
using namespace std;

void insertAt(int arr[], int &n, int element, int position, int max_size) {

    if (n >= max_size) {
        cout << "Array is full. Cannot insert element." << endl;
        return;
    }

   
    if (position < 0 || position > n) {
        cout << "Invalid position. Cannot insert element." << endl;
        return;
    }

    
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[position] = element;

    
    n++;
}

int main() {
    const int max_size = 10;  
    int arr[max_size] = {1, 2, 4, 5,6};  
    int n = 5; 
    int element = 3;  
    int position = 2;  

    cout << "Array before insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertAt(arr, n, element, position, max_size);

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

