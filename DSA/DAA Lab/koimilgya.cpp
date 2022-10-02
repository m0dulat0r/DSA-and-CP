#include <iostream>
using namespace std;

int sumOfDigits(int x)
{

    int summ = 0;
    int y;
    while (x > 0)
    {
        y = x % 10;
        summ += y;
        x = x / 10;
    }
    return summ;
}

int main()
{

    int a;
    cin >> a;

    int digits;
    int flag = 0;
    if (a % 9 == 0)
    {
        digits = (a / 9);
    }
    else
    {
        digits = (a / 9) + 1;
    }
    int start = 10 * (digits - 1);
    int end;
    if (start == 0)
    {
        end = 10;
    }
    else
    {
        end = start * 10;
    }

    for (int i = start; i < end; i++)
    {
        if (sumOfDigits(i) == a)
        {
            cout << i;
            flag = 1;

            break;
        }
    }
    if (flag == 0)
    {
        cout << "Not Possible";
    }

    return 0;
}