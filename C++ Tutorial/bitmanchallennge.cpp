#include <iostream>

using namespace std;

int check(int n)
{
    return ((n) & (n & (n - 1)) != 0);
}
int main()
{

    // Write a program to write if a nunber is a power of 2
    int n = 64;

    if (check(n))
    {
        cout << "This is not a power by 2";
    }
    else
    {
        cout << "This is a power of 2";
    }

    return 0;
}