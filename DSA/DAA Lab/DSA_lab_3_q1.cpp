#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int indexoF(int arr[], int n, int number)
{
    int indexx = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= number)
        {
            break;
        }
        indexx++;
    }

    return indexx - 1;
}
int main()
{
    int x;
    cout << "SIZE OF ARRAY :";
    cin >> x;
    int arr[x];
    cout << "ELEMENTS OF ARRAY :";

    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    cout << "Input number :";

    int to_find;
    cin >> to_find;

    quickSort(arr, 0, x);
    int curr_index = indexoF(arr, x, to_find);

    while (curr_index != -1)
    {
        if (arr[curr_index] != (to_find - 1))
        {
            cout << to_find - 1;
            break;
        }
        else if (arr[curr_index] == (to_find - 1))
        {
            curr_index--;
        }

        to_find--;
    }
    return 0;
}