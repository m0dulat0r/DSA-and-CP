#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *s;
};

void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is Full ";
        return;
    }
    if (q->rear == -1)
    {
        q->front = 0;
    }
    q->rear++;
    q->s[q->rear] = x;
}

int Dequeue(struct Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        cout << "Queue is Empty";
        return x;
    }
    x = q->s[q->front];
    q->front++;
    return x;
}

void display(struct Queue *st)
{
    for (int i = st->front; i < st->rear + 1; i++)
    {
        cout << st->s[i] << "\t";
    }
}

int main()
{
    struct Queue st;
    cin >> st.size;
    st.s = new int[st.size];
    st.front = -1;
    st.rear = -1;

    enqueue(&st, 1);
    enqueue(&st, 2);
    enqueue(&st, 3);
    enqueue(&st, 4);
    Dequeue(&st);
    Dequeue(&st);
    display(&st);

    return 0;
}