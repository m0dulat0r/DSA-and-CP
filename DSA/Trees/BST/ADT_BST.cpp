#include <iostream>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

Node *Rcreate(struct Node *q, int key)
{
    Node *t;

    if (q == NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;

        return t;
    }

    if (key > q->data)
    {
        q->rchild = Rcreate(q->rchild, key);
    }
    // else if (key == q->data)
    // {
    //     return NULL;
    // }
    else
    {
        q->lchild = Rcreate(q->lchild, key);
    }

    return q;
}

void Insert(struct Node *&q, int key)
{

    struct Node *t = q;
    struct Node *r = NULL;
    if (q == NULL)
    {
        struct Node *n = new Node;
        n->data = key;
        n->lchild = n->rchild = NULL;
        q = n;
        return;
    }

    while (t != NULL)
    {

        r = t;
        if (key < t->data)
        {
            t = t->lchild;
        }
        else if (key > t->data)
        {
            t = t->rchild;
        }
        else
        {
            return;
        }
    }
    struct Node *finale = new Node;
    finale->data = key;
    finale->lchild = finale->rchild = NULL;
    if (key < r->data)
    {
        r->lchild = finale;
    }
    else
    {
        r->rchild = finale;
    }
}

void Inorder(struct Node *q)
{

    if (q)
    {
        Inorder(q->lchild);
        cout << q->data << " ";
        Inorder(q->rchild);
    }
}

Node *Rsearch(struct Node *q, int key)
{

    if (q == NULL)
    {
        return NULL;
    }

    if (key == q->data)
    {
        return q;
    }
    else
    {
        if (key > q->data)
        {
            return Rsearch(q->rchild, key);
        }
        else
        {
            return Rsearch(q->lchild, key);
        }
    }
}

int Height(struct Node *head)
{
    int x, y;
    if (head == NULL)
    {

        return 0;
    }
    else
    {
        x = Height(head->lchild);
        y = Height(head->rchild);
    }
    return x > y ? x + 1 : y + 1;
}

struct Node *Inpre(struct Node *p)
{
    while (p && p->rchild != NULL)
    {
        p = p->rchild;
    }
    return p;
}

struct Node *Insucc(struct Node *p)
{
    while (p && p->lchild != NULL)
    {
        p = p->lchild;
    }
    return p;
}

struct Node *Delete(struct Node *&head, int key)
{
    struct Node *p = head;
    if (p == NULL)
    {
        return NULL;
    }
    if (p->lchild == NULL && p->rchild == NULL)
    {
        delete p;
        return NULL;
    }
    if (key < p->data)
    {
        p->lchild = Delete(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Delete(p->rchild, key);
    }
    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            struct Node *q = Inpre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            struct Node *q = Insucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

int main()
{
    Node *q = NULL;

    // q = Rcreate(q, 100);
    // Rcreate(q, 20);
    // Rcreate(q, 40);
    // Rcreate(q, 70);
    // Rcreate(q, 15);
    // Rcreate(q, 24);
    // Rcreate(q, 45);
    // Inorder(q);

    Insert(q, 10);
    Insert(q, 120);
    Insert(q, 100);
    Insert(q, 16);
    Insert(q, 13);
    Delete(q, 16);
    Inorder(q);
    cout << "\n";

    Node *se = Rsearch(q, 100);

    cout << se->data;

    return 0;
}