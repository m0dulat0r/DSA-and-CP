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
                    break;
                }
            }
            if (flag == 0)
            {
                arr.push_back(a);
            }
        }
        int sum = 0;
        for (int g = 0; g < arr.size(); g++)
        {
            sum = sum + 1 + arr[g];
        }
        cout << sum;
    }

    return 0;
}