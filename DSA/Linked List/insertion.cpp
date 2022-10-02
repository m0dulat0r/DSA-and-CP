#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// struct node{
//     int data;
//     struct node* next;

// }*head=NULL;
// Struct Way to create a Node

void insertAtTail(node *&head, int val)
{
    node *temp = head;
    node *n = new node(val);

    if (temp == NULL)
    {
        head = n;
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (temp == NULL)
    {
        head = n;
        return;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 5);

    display(head);
    cout << endl;

    insertAtHead(head, 10);
    insertAtHead(head, 15);

    display(head);

    return 0;
}