#include <iostream>
using namespace std;

// Node structure for Singly Linked List
struct SinglyNode {
    int data;
    SinglyNode* next;
};

// Insert a new node at the beginning of the singly linked list
void insertSingly(SinglyNode*& head, int data) {
    SinglyNode* newNode = new SinglyNode{data, head};
    head = newNode;
}

// Display the singly linked list
void displaySingly(SinglyNode* head) {
    SinglyNode* current = head;
    while (current) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL\n";
}

int main() {
    SinglyNode* singlyHead = nullptr;
    insertSingly(singlyHead, 10);
    insertSingly(singlyHead, 20);
    insertSingly(singlyHead, 30);
    cout << "Singly Linked List: ";
    displaySingly(singlyHead);

    return 0;
}

