#include <iostream>
using namespace std;

// Node structure for Doubly Linked List
struct DoublyNode {
    int data;
    DoublyNode* prev;
    DoublyNode* next;
};

// Insert a new node at the beginning of the doubly linked list
void insertDoubly(DoublyNode*& head, int data) {
    DoublyNode* newNode = new DoublyNode{data, nullptr, head};
    if (head) head->prev = newNode;
    head = newNode;
}

// Display the doubly linked list in forward direction
void displayDoubly(DoublyNode* head) {
    DoublyNode* current = head;
    while (current) {
        cout << current->data << " <-> ";
        current = current->next;
    }
    cout << "NULL\n";
}

int main() {
    DoublyNode* doublyHead = nullptr;
    insertDoubly(doublyHead, 40);
    insertDoubly(doublyHead, 50);
    insertDoubly(doublyHead, 60);
    cout << "Doubly Linked List: ";
    displayDoubly(doublyHead);

    return 0;
}

