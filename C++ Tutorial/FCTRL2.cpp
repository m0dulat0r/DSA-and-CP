#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        int fact = 1;

        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        cout << fact << "\n";
    }
}
