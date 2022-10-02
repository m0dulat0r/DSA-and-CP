#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int j, k;
        cin >> j >> k;
        if (j > k)
        {
            cout << ">" << endl;
        }
        else if (j < k)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
}