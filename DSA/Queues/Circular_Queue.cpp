#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{

    q->size = size;
    q->front = q->rear = 0;

    q->Q = new int[q->size];
}

void Enqueue(struct Queue *q, int x)
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

int dequeue(struct Queue *q)
{
    int x = -1;
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

void display(struct Queue q)
{
    for (int i = q.front + 1; i <= q.rear; i++)
    {
        cout << q.Q[i] << flush;
        if (i < q.rear)
        {
            cout << " <- " << flush;
        }
    }
    cout << endl;
}

int main()
{
    struct Queue q;
    create(&q, 100);
    for (int k = 1; k <= 7; k++)
    {
        Enqueue(&q, k);
    }
    for (int k = 1; k <= 4; k++)
    {
        Enqueue(&q, dequeue(&q));
        int val = dequeue(&q);
    }

    display(q);

    return 0;
}