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

node *arrtoLL(int arr[], int n)
{
    node *head = new node(arr[0]);
    node *temp = head;
    // node *last = NULL;

    for (int i = 1; i < n; i++)
    {
        node *nude = new node(arr[i]);
        temp->next = nude;
        temp = temp->next;
    }
    return head;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
    cout << "\n";
}

node *merge(node *&p, node *q)
{
    node *last;
    node *third;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        last->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    if (q)
        last->next = q;

    return third;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11};

    int n = sizeof(arr) / sizeof(arr[0]);
    node *head = arrtoLL(arr, n);
    display(head);

    int arr2[] = {2, 4, 6, 8, 10, 12};

    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    node *head2 = arrtoLL(arr2, n);
    display(head2);

    node *head3 = merge(head, head2);
    display(head3);

    return 0;
}