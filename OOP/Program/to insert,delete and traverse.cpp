#include <iostream>
using namespace std;


const int ListSize = 10;  
int List[ListSize];       
int NumElements = 5;     


void initializeArray() {
    List[0] = 87;
    List[1] = 75;
    List[2] = 98;
    List[3] = 100;
    List[4] = 82;
}


void printArray(int size) {
    for (int i = 0; i < size; i++) {
        cout << List[i] << " ";
    }
    cout << endl;
}


void insertElement(int newElement, int insertLoc) {
    if (NumElements < ListSize && insertLoc <= NumElements && insertLoc >= 0) {
        for (int i = NumElements; i > insertLoc; i--) {
            List[i] = List[i - 1];  // Shift elements to the right
        }
        List[insertLoc] = newElement;
        NumElements++;
    } else {
        cout << "Insertion failed: Array is full or invalid location." << endl;
    }
}


void deleteElement(int deleteLoc) {
    if (deleteLoc < NumElements && deleteLoc >= 0) {
        for (int i = deleteLoc; i < NumElements - 1; i++) {
            List[i] = List[i + 1];  // Shift elements to the left
        }
        NumElements--;
    } else {
        cout << "Deletion failed: Invalid location." << endl;
    }
}

int main() {
    initializeArray(); 
    cout << "Initial Array: ";
    printArray(NumElements);  

    // Insert 33 at location 4
    insertElement(33, 4);
    cout << "Array After Insertion: ";
    printArray(NumElements);  

    // Delete the element at location 2
    deleteElement(2);
    cout << "Array After Deletion: ";
    printArray(NumElements);  

    return 0;
}

