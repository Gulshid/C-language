#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Class for LinkedList operations
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize the list
    LinkedList() {
        head = nullptr;
    }

    // Insert at the end of the list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Delete a node by value
    void deleteValue(int value) {
        if (head == nullptr) return; // Empty list

        // If the node to be deleted is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    // Traverse the list and print elements
    void traverse() {
        Node* temp = head;
        if (temp == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Search for a value in the list
    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Get the length of the list
    int length() {
        int len = 0;
        Node* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        return len;
    }

    // Destructor to clean up the list
    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;

    // Inserting values into the list
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    // Traversing and printing the list
    cout << "List: ";
    list.traverse();

    // Searching for a value
    int searchValue = 20;
    if (list.search(searchValue)) {
        cout << searchValue << " is found in the list." << endl;
    } else {
        cout << searchValue << " is not found in the list." << endl;
    }

    // Deleting a value
    int deleteValue = 20;
    list.deleteValue(deleteValue);
    cout << "After deleting " << deleteValue << ": ";
    list.traverse();

    // Get the length of the list
    cout << "Length of the list: " << list.length() << endl;

    return 0;
}
