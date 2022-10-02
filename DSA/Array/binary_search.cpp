#include <iostream>
using namespace std;

int binary(int *arr, int key)
{
    int l = 0;
    int h = 11;

    while (h >= l)
    {
        int mid = (h + l) / 2;

        if (key == arr[mid])
        {
            return mid;
            break;
        }
        else if (key > arr[mid])
        {
            l = l + 1;
        }
        else
        {
            h = h - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    cout << binary(arr, 13);

    return 0;
}