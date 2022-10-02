#include <iostream>
using namespace std;

void ArSum(int arr[], int n)
{

    int summ = 0;
    for (int i = 0; i < n; i++)
    {
        summ += arr[i];
    }
    cout << summ;
}

void FindReplace(int arr[], int n, int old, int neww)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == old)
        {
            arr[i] = neww;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int y;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        arr[i] = y;
    }
    int set_size;
    cin >> set_size;
    int change[set_size];
    int z;
    for (int j = 0; j < set_size; j++)
    {
        cin >> z;
        change[j] = z;
    }

    int new_change[set_size];
    for (int j = 0; j < set_size; j++)
    {
        cin >> z;
        new_change[j] = z;
    }

    for (int j = 0; j < set_size; j++)
    {
        FindReplace(arr, n, change[j], new_change[j]);

        ArSum(arr, n);
        cout << "\n";
    }

    return 0;
}