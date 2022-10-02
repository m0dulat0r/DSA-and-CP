#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int number;

        vector<int> arr{1, 2, 3, 4};

        cout << arr.size();
    }

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector{1, 2, 3, 4, 5};
    cout << myvector.size();
    return 0;
}