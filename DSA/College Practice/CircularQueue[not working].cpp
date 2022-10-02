#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *s;
};

void Enqueue(struct Queue *q, int x)
{

    if ((q->rear + 1) % (q->size) == q->front)
    {
        cout << "Queue Is Full ";
    }
    else
    {
        q->rear = (q->rear + 1) % (q->size);
        q->s[q->rear] = x;
    }
}

int Dequeue(struct Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
    {
        cout << "Queue is Empty";
    }
    else
    {
        x = q->s[q->front];

        q->front = (q->front + 1) % q->size;
    }
    return x;
}

void display(struct Queue *st)
{

    while (st->front - 1 != st->rear)
    {
        cout << st->s[st->front] << "\t";
        st->front = (st->front + 1) % st->size;
    }
}
int main()
{

    struct Queue q;
    cin >> q.size;
    q.front = q.rear = 0;
    q.s = new int[q.size];

    Enqueue(&q, 1);
    Enqueue(&q, 2);
    Enqueue(&q, 3);
    Dequeue(&q);

    display(&q);

    return 0;
}