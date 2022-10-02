#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
};

void CreateBST(struct Node *&root, int val)
{
    struct Node *temp = root;
    struct Node *temp2;

    while (temp != NULL)
    {
        temp2 = temp;
        if (val < temp->data)
        {
            temp = temp->lchild;
        }
        else if (val == temp->data)
        {
            cout << "No Same Entry Allowed";
            return;
        }
        else
        {
            temp = temp->rchild;
        }
    }
    struct Node *r = new Node;
    r->data = val;
    r->lchild = r->rchild = NULL;
    if (root == NULL)
    {
        root = r;
        return;
    }
    if (val > temp2->data)
    {
        temp2->rchild = r;
    }
    else
    {
        temp2->lchild = r;
    }
}

struct Node *Insert(struct Node *&root, int val)
{
    struct Node *t;
    if (root == NULL)
    {
        t = new Node;
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
    return root;
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

int Height(struct Node *root)
{
    int x, y;
    if (root == NULL)
    {
        return 0;
    }
    x = Height(root->lchild);
    y = Height(root->rchild);

    return x > y ? x + 1 : y + 1;
}

struct Node *InPre(struct Node *root)
{
    while (root && root->rchild != NULL)
    {
        root = root->rchild;
    }
    return root;
}
struct Node *InSucc(struct Node *root)
{
    while (root && root->lchild != NULL)
    {
        root = root->lchild;
    }
    return root;
}

struct Node *Delete(struct Node *&temp, int key)
{
    struct Node *root = temp;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->lchild == NULL && root->rchild == NULL)
    {
        delete root;
        return NULL;
    }

    // Driver Code

    if (key > root->data)
    {
        root->rchild = Delete(root->rchild, key);
    }
    else if (key < root->data)
    {
        root->lchild = Delete(root->lchild, key);
    }
    else
    {

        if (Height(root->lchild) > Height(root->rchild))
        {
            struct Node *q = InPre(root->lchild);
            root->data = q->data;
            root->lchild = Delete(root->lchild, q->data);
        }
        else
        {

            struct Node *q = InSucc(root->rchild);
            root->data = q->data;
            root->rchild = Delete(root->rchild, q->data);
        }
    }

    return root;
}

int main()
{
    struct Node *root = NULL;
    CreateBST(root, 10);
    CreateBST(root, 20);
    CreateBST(root, 30);
    CreateBST(root, 5);
    CreateBST(root, 7);
    CreateBST(root, 24);
    CreateBST(root, 16);

    Insert(root, 101);
    Insert(root, 1);

    Inorder(root);
    cout << "\n";

    Delete(root, 30);
    Delete(root, 16);
    Inorder(root);

    return 0;
}