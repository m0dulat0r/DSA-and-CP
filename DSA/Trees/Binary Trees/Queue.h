#include <iostream>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

// Creating a circular Queue to store address of the Nodes of the tree

struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q;
};

void create(struct Queue *q, int size)
{

    q->size = size;
    q->front = q->rear = 0;

    q->Q = new Node *;
}

void Enqueue(struct Queue *q, Node *x)
{

    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue if FUll";
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

Node *dequeue(struct Queue *q)
{
    Node *x = NULL;
    if (q->front == q->rear)
    {
        cout << "QUEUE IS EMPTY \n";
    }
    else
    {
        q->front = (q->front + 1) % q->size;

        x = q->Q[q->front];
    }
    return x;
}

int isEmpty(struct Queue q)
{

    return q.front == q.rear;
}
