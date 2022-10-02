#include <iostream>

using namespace std;

int getBit(int n, int pos)
{
    int num;

    return (n & (1 << pos)) != 0; // 1<<pos operator just places the digit 1 at the position
}

int setBit(int n, int pos)
{
    return (n | (1 << pos)); // '|' operator adds 1 to that position
}

int clearBit(int n, int pos)
{
    int a = 1 << pos;

    return ((~a) & n);
}

int main()
{
    int a = getBit(4, 2);
    int b = setBit(4, 1);
    int c = clearBit(5, 2);
    cout
        << a << endl
        << b << endl
        << c;

    return 0;
}