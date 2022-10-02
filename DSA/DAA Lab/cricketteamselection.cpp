#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h1[n], h2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> h1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h2[i];
    }
    int summ = 0;
    int flag = 0;
    int var = 0;
    if ((h1[0] > h2[0]))
    {
        summ += h1[0];
        flag = 0;
        var = summ;
    }
    else
    {
        summ += h2[0];
        flag = 1;
        var = summ;
    }
    for (int i = 1; i < n; i++)
    {

        if (flag == 0)
        {
            if (summ + h2[i] + h1[i + 1] > summ + h1[i + 1])
                summ += h2[i];
            flag = 1;
        }
        else
        {

            summ += h1[i];
            flag = 0;
        }
    }
    return 0;
}