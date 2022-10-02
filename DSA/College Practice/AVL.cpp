#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
    int height;
};

int NodeHeight(struct Node *p)
{
    int hl, hr;

    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl > hr ? hl + 1 : hr + 1;
}

int BalanceFactor(struct Node *p)
{
    int hl, hr;

    hl = p && p->lchild ? p->lchild->height : 0;
    hr = p && p->rchild ? p->rchild->height : 0;

    return hl - hr;
}
struct Node *LLrotation(struct Node *&p) // original
{

    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    p = pl;

    return p;
}
struct Node *LRrotation(struct Node *&p) // Original
{

    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;

    plr->lchild = pl;
    plr->rchild = p;

    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    plr->height = NodeHeight(plr);

    p = plr;

    return p;
}
struct Node *RLrotation(struct Node *&p)
{
    struct Node *pr = p->rchild;
    struct Node *prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;

    prl->lchild = p;
    prl->rchild = pr;

    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
    prl->height = NodeHeight(prl);

    p = prl;

    return p;
}
struct Node *RRrotation(struct Node *&p)
{
    struct Node *pl = p->rchild;
    struct Node *plr = pl->lchild;

    pl->lchild = p;
    p->rchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    p = pl;

    return p;
}

struct Node *Insert(struct Node *&root, int val)
{
    struct Node *t;
    if (root == NULL)
    {
        t = new Node;
        t->height = 1;
        t->rchild = t->lchild = NULL;
        t->data = val;
        return t;
    }
    if (val < root->data)
    {
        root->lchild = Insert(root->lchild, val);
    }
    else
    {

        root->rchild = Insert(root->rchild, val);
    }

    root->height = NodeHeight(root);

    if (BalanceFactor(root) == 2 && BalanceFactor(root->lchild) == 1)
    {
        return LLrotation(root);
    }
    else if (BalanceFactor(root) == -2 && BalanceFactor(root->rchild) == -1)
    {
        return RRrotation(root);
    }
    else if (BalanceFactor(root) == 2 && BalanceFactor(root->lchild) == -1)
    {
        return LRrotation(root);
    }
    else if (BalanceFactor(root) == -2 && BalanceFactor(root->rchild) == 1)
    {
        return RLrotation(root);
    }

    return root;
}
void Preorder(struct Node *root)
{
    if (root != NULL)
    {
        cout << root->data << "\t";

        Preorder(root->lchild);
        Preorder(root->rchild);
    }
}

void Inorder(struct Node *root)
{
    if (root != NULL)
    {
        Inorder(root->lchild);
        cout << root->data << "\t";
        Inorder(root->rchild);
    }
}

int main()
{
    struct Node *root = NULL;

    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 2);
    Insert(root, 1);
    Insert(root, 12);
    Insert(root, 100);
    Insert(root, 20);
    Insert(root, 25);
    Insert(root, 3);
    Insert(root, 26);
    Insert(root, 7);
    Preorder(root);
    cout << "\n";

    Inorder(root);
    return 0;
}