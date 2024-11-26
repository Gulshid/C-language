#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};

Node* createNode(int value) 
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}
void insertNode(Node*& head, int value, int position) 
{
    Node* newNode = createNode(value);
    if (position == 1) 
	{
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) 
	{
        temp = temp->next;
    }

    if (temp != nullptr) 
	{
        newNode->next = temp->next;
        temp->next = newNode;
    } 
	else 
	{
        cout << "Position out of bounds" << endl;
    }
}

void deleteNode(Node*& head, int position) 
{
    if (head == nullptr) 
	{
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    if (position == 1) 
	{
        head = head->next;
        delete temp;
        return;
    }

    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) 
	{
        temp = temp->next;
    }

    if (temp->next != nullptr) 
	{
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    } else {
        cout << "Position out of bounds" << endl;
    }
}


void printList(Node* head) 
{
    Node* temp = head;
    while (temp != nullptr) 
	{
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


bool findNode(Node* head, int value) 
{
    Node* temp = head;
    while (temp != nullptr) 
	{
        if (temp->data == value) 
		{
            return true;
        }
        temp = temp->next;
    }
    return false;
}


int main() 
{
    Node* head = nullptr;

   
    insertNode(head, 2, 1);
    insertNode(head, 6, 2);
    insertNode(head, 7, 3);
    insertNode(head, 8, 4);
    insertNode(head, 1, 5);
    printList(head);

    insertNode(head, 9, 3);
    cout << "After inserting 9 at 3rd position:" << endl;
    printList(head);

    cout << "Searching for node with value 9: " << (findNode(head, 9) ? "Found" : "Not Found") << endl;
    cout << "Searching for node with value 12: " << (findNode(head, 12) ? "Found" : "Not Found") << endl;

    deleteNode(head, 3);
    cout << "After deleting node at 3rd position:" << endl;
    printList(head);
}
