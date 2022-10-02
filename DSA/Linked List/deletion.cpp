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

void deleteNode(node *&head, int val)
{

    node *temp = head;

    if (val == head->data)
    {
        node *toDelete1 = head;

        head = head->next;

        delete toDelete1;
        return;
    }

    while (temp->next->data != val)
    {
        temp = temp->next;
        if (temp->next == NULL)
        {
            cout << "Value Not Found" << endl;
            return;
        }
    }

    node *toDelete = temp->next;

    temp->next = temp->next->next;

    delete toDelete;
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

int main()
{
    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 5);
    insertAtTail(head, 41);
    insertAtTail(head, 55);
    insertAtTail(head, 75);

    display(head);
    cout << endl;

    deleteNode(head, 5);
    display(head);
    deleteNode(head, 1);
    display(head);
    deleteNode(head, 90);
    display(head);
    return 0;
}