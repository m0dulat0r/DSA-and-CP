#include <iostream>

using namespace std;

int check(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{

    // Write a program to check number of 1s in a binary representation
    int a;
    cin >> a;

    int b = check(a);
    cout << b << endl;

    return 0;
}