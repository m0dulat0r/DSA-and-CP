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

node *merge(node *head1, node *head2)
{
    node *merged = NULL;
    node *one = head1;
    node *two = head2;

    int l1 = lenght(head1);
    int l2 = lenght(head2);
    int count = 0;

    while (one != NULL && two != NULL)
    {
        if (one->data > two->data)
        {
            insertAtTail(merged, two->data);
            two = two->next;
        }
        else
        {
            insertAtTail(merged, one->data);
            one = one->next;
        }
    }

    while (one != NULL)
    {
        insertAtTail(merged, one->data);
        one = one->next;
    }

    while (two != NULL)
    {
        insertAtTail(merged, two->data);
        one = one->next;
    }

    return merged;
}

int main()
{
    node *head = NULL;
    node *head2 = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 41);
    insertAtTail(head, 55);
    insertAtTail(head, 75);

    insertAtTail(head2, 2);
    insertAtTail(head2, 4);
    insertAtTail(head2, 5);
    insertAtTail(head2, 33);
    insertAtTail(head2, 67);
    insertAtTail(head2, 73);

    display(head);
    display(head2);

    node *merged = merge(head, head2);

    display(merged);

    return 0;
}