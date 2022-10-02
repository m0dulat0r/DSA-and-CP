#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + arr[i];
    }
    return s;
}
int main()
{
    int n;
    cin >> n;
    int value[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int k;
    cin >> k;
    int TBC[1000], NV[1000];
    for (int i = 0; i < k; i++)
    {
        cin >> TBC[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> NV[i];
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n;)
        {
            if (value[j] == TBC[i])
            {
                value[j] = NV[i];
            }
        }
        cout << sum(value, n) << " ";
    }
}