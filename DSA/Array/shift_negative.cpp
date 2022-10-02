#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int a[] = {1, -1, 3, 2, -7, -5, 11, 6};

    int l = 0;

    int h = 7;

    while (l < h)
    {
        if (a[l] > 0)
        {
            swap(a[l], a[h]);
            h--;
        }
        else
        {
            l++;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}