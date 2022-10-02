#include <iostream>
#include <utility>
// Dutch National Flag Algorithm
using namespace std;

// void swap(int *a, int *b)
// {

//     int temp = *a;
//     *a=*b;
//     *b=temp;

// }
int main()
{

    int a[] = {0, 2, 1, 2, 1, 0, 0, 1, 2, 1, 1, 0, 0, 2, 1};
    int i = 0;
    int mid = 0;
    int l = 0;
    int h = 14;

    while (mid < h)
    {

        if (a[mid] == 0)
        {
            swap(a[l], a[mid]);
            l++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[h]);
            h--;
        }
    }
    for (int i = 0; i < 14; i++)
    {
        cout << a[i] << "\t";
    }

    return 0;
}