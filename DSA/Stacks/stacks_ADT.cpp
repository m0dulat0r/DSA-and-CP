#include <iostream>
using namespace std;

struct Stack
{
    int top;
    int size;
    int *s;
};

void create(struct Stack *st)
{
    int size;
    st->top = -1;
    cout << "Enter Size of Array : ";
    cin >> st->size;

    st->s = new int[st->size];
}
void display(struct Stack *st)
{

    int size = st->top; // since we need only defined elements;

    for (int i = 0; i < size + 1; i++)
    {
        cout << st->s[i] << "\t";
    }
    cout << "\n";
}

void push(struct Stack *st, int val)
{
    if (st->top == (st->size - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        st->top++;
        st->s[st->top] = val;
    }
}

int pop(struct Stack *st)
{
    if (st->top == -1)
    {
        return 0;
    }
    else
    {
        int x = st->s[st->top];
        st->top--;
        return x;
    }
}

int main()
{

    struct Stack st;

    create(&st);

    push(&st, 1);
    push(&st, 2);
    push(&st, 3);
    push(&st, 4);
    push(&st, 5);
    display(&st);
    pop(&st);
    display(&st);

    return 0;
}
