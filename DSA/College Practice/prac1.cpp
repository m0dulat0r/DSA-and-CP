#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int finale[n];
    int fin = 0;
    int product;

    for (int i = 0; i < n; i++)
    {
        int j = i;
        int k = i;
        int left = 0;
        int right = 0;
        while (arr[i] >= arr[j] || j == 0)
        {
            j--;
        }
        left = (j == 0 ? 0 : j + 1);

        while (arr[i] >= arr[k] || k == n)
        {
            k++;
        }
        right = (k == n ? 0 : k + 1);
        product = left * right;
        finale[fin] = product;
        fin++;
    }

    int max = finale[0];
    for (int i = 0; i < n; i++)
    {
        if (finale[i] > max)
        {
            max = finale[i];
        }
    }

    cout << max;

    return 0;
}