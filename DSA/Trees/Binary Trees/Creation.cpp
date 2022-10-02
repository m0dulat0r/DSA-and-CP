#include <iostream>
using namespace std;
#include "Queue.h"

// struct Node
// {
//     struct Node *lchild;
//     int data;
//     struct Node *rchild;
// };

struct Node *root = NULL;

void createTree()
{
    struct Node *p, *t;
    struct Queue q;
    int x;
    create(&q, 100);
    cout << "Enter Root Value : ";
    cin >> x;
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    Enqueue(&q, root);

    while (!isEmpty(q))
    {

        p = dequeue(&q);
        cout << "Enter The Left Child Value of " << p->data << " :";
        cin >> x;

        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            Enqueue(&q, t);
        }

        cout << "Enter The Right Child Value of " << p->data << " :";
        cin >> x;

        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            Enqueue(&q, t);
        }
    }
}

void Preorder(struct Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void LevelOrder(struct Node *p)
{

    struct Queue q;
    create(&q, 100);

    cout << p->data << " ";
    Enqueue(&q, p);
    while (!isEmpty(q))
    {

        p = dequeue(&q);
        if (p->lchild)
        {
            cout << p->lchild->data << " ";
            Enqueue(&q, p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << " ";
            Enqueue(&q, p->rchild);
        }
    }
}

int main()
{

    createTree();
    Preorder(root);
    cout << "\n";
    LevelOrder(root);

    return 0;
}