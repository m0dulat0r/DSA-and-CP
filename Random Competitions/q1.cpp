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

        cin >> number;
        vector<int> arr{};

        for (int j = 0; j < number; j++)
        {
            int a;
            cin >> a;
            int flag = 0;
            for (int k = 0; k < arr.size(); k++)
            {
                if (arr[k] == a)
                {
                    flag = 1;
                    arr.erase(arr.begin() + k);
                    break;
                }
            }
            if (flag == 0)
            {
                arr.push_back(a);
            }
        }
        cout << arr[0] << "\n";
    }

    return 0;
}