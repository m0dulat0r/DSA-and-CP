#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    while (n--)
    {
        int d;
        cin >> d;

        int first = 0, last = 0;

        last = d % 10;

        while (d > 9)
        {
            d = d / 10;
        }
        first = d % 10;

        cout << first + last << "\n";
    }
}