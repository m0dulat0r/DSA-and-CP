#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
int Len(struct Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

void InsertAtTail(struct Node *&head, int val)
{
    struct Node *temp = head;
    if (head == NULL)
    {
        struct Node *add = new Node;
        add->data = val;
        add->next = NULL;

        head = add;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    struct Node *add = new Node;
    add->data = val;
    add->next = NULL;
    temp->next = add;
}

void display(struct Node *head)
{
    struct Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "\n";
}

struct Node *ArraytoLL(int arr[], int n)
{
    struct Node *add = new Node;
    add->data = arr[0];
    add->next = NULL;

    struct Node *temp = add;
    for (int i = 1; i < n; i++)
    {
        struct Node *lol = new Node;
        lol->data = arr[i];
        lol->next = NULL;
        temp->next = lol;
        temp = temp->next;
    }
    return add;
}

void Reverse(struct Node *&head)
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *nex;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    head = prev;
}

void RemoveDupes(struct Node *&head)
{
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            struct Node *todelete = temp->next;
            temp->next = temp->next->next;

            delete todelete;
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{

    // struct Node *head = new Node;
    // head = NULL;

    // InsertAtTail(head, 10);
    // InsertAtTail(head, 11);
    // InsertAtTail(head, 12);
    // InsertAtTail(head, 13);
    // display(head);

    int arr[10] = {1, 2, 3, 5, 5, 5, 7, 8, 9, 10};
    struct Node *newhead = ArraytoLL(arr, 10);
    display(newhead);

    Reverse(newhead);
    display(newhead);
    RemoveDupes(newhead);
    display(newhead);

    return 0;
}