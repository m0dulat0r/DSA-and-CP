#include <iostream>
using namespace std;

struct Node
{

    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL;

Node *Rcreate(struct Node *q, int key)
{
    struct Node *t = NULL;

    if (q == NULL)
    {
        t = new Node;
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;

        return t;
    }

    if (key > q->data)
    {
        q->rchild = Rcreate(q->rchild, key);
    }

    else
    {
        q->lchild = Rcreate(q->lchild, key);
    }

    return q;
}

int main()
{

    return 0;
}