#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = s[i] - 'a' + 1;
        }
        int sum = v[0], c = 0;
        for (int i = 0, j = 0; i < n;)
        {
            if (sum > n)
            {
                sum -= v[j];
                j++;
                continue;
            }
            if (sum == n)
            {
                c++;
                sum -= v[j];
                j++;
            }
            i++;
            sum += v[i];
        }
        cout << c << '\n';
    }
    return 0;
}