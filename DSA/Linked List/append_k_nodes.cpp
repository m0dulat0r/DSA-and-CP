#include <iostream>
using namespace std;

class node
{
public:
    node *next;
    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
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

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int lenght(node *head)
{
    int l = 0;

    if (head == NULL)
    {
        return 0;
    }

    while (head != NULL)
    {
        l++;
        head = head->next;
    }
    return l;
}

node *kappend(node *&head, int k)
{
    int l = lenght(head);
    k = k % l;

    node *newtail;
    node *newhead;
    node *temp = head;
    int count = 1;

    while (temp->next != NULL)
    {
        if (l - k == count)
        {
            newtail = temp;
        }
        else if (l - k + 1 == count)
        {
            newhead = temp;
        }
        temp = temp->next;
        count++;
    }
    newtail->next = NULL;
    temp->next = head;
    return newhead;
}

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 41);
    insertAtTail(head, 55);
    insertAtTail(head, 75);
    int l = lenght(head);

    display(head);
    node *k_node = kappend(head, 2);
    display(k_node);

    return 0;
}