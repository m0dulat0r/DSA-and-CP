#include <iostream>
using namespace std;

int power(int n, int x)
{
    if (x > 0)
    {

        return n * power(n, x - 1);
    }

    return 1;
}
int main()
{

    int n, x;
    n = 2;
    x = 10;

    int xd = power(n, x);

    cout << xd;
    return 0;
}