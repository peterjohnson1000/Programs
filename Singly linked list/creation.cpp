#include <iostream>
#include <string>
using namespace std;

// we want the address so pointer is required
class node
{
public:
    int data;
    node *next; // it is a self referencing pointer pointing to the node
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = n;
    (*temp).next = head;
    head = temp;
}

void insertNode(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    temp->next = n;
}

void insertAtEnd(node *&head, int val)
{
    if (head->next != NULL)
    {

        node *n = new node(val);
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
        temp = temp->next;
    }
    else
    {
        cout << "Empty Linked List ";
    }
}

bool searchNode(node *&head, int val)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void printLinkedList(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL"
         << "\n";
}

void deleteNode(node *&head, int val)
{
    node *temp = head;
    node *temp1 = head;
    while (temp->data != val)
    {
        temp = temp->next;
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    insertNode(head, 12);
    insertAtEnd(head, 13);
    insertAtHead(head, 9);
    printLinkedList(head);
    if (searchNode(head, 12))
    {
        cout << "data found \n";
    }
    else
    {
        cout << "data not found \n";
    }
    if (searchNode(head, 8))
    {
        cout << "data found \n";
    }
    else
    {
        cout << "data not found \n";
    }

    return 0;
}