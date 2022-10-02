#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack OverFlow ";
        return;
    }
    st->top++;
    st->s[st->top] = x;
}
int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "Stack Undeflow";
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

void display(struct Stack *st)
{
    for (int i = 0; i < st->top + 1; i++)
    {
        cout << st->s[i] << "\t";
    }
}

int isEmpty(struct Stack *st)
{
    int x = 0;
    if (st->top == -1)
    {
        x = 1;
    }
    return x;
}

int main()
{
    // Stack Initialisation
    struct Stack st;
    cin >> st.size;
    st.s = new int[st.size];
    st.top = -1;

    // Stack Commands
    push(&st, 10);
    push(&st, 11);
    push(&st, 12);
    push(&st, 13);
    push(&st, 14);
    push(&st, 15);
    pop(&st);
    display(&st);

    return 0;
}