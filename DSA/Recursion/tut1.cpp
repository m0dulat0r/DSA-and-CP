#include <iostream>
using namespace std;

int fun(int x)
{
    if (x > 0)
    {
        cout << x;

        fun(x - 1);
    }
    return 0;
}

int main()
{

    fun(10);
    return 0;
}