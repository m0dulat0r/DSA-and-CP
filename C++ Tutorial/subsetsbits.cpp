#include <iostream>

using namespace std;

void subsets(int arr[], int a)
{
    for (int i = 0; i < (1 << a); i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j];
            }
        }
        cout << endl;
    }
}
int main()
{

    // Write a program to check number of 1s in a binary representation

    int arr[4] = {1, 2, 3, 4};

    subsets(arr, 4);

    return 0;
}