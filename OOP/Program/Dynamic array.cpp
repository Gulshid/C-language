#include <iostream>
using namespace std;

int main() {
    int n;

   
    cout<<"Enter the number of elements: ";
    cin>>n;

    
    int *arr = new int[n];

    
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    delete[] arr;

    return 0;
}

