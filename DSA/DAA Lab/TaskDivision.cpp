#include <iostream>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int tasks;
        cin >> tasks;

        int a = tasks - 2, b = 1, c = 1;
        int count = 0;
        int temp;
        for (int i = (tasks / 3) + 1; i < tasks - 2; i++)
        {
            if (a > 0 && b > 0 && c > 0)
            {
                a--;
                b++;
                if ()
                    count++;
            }
        }
    }
    return 0;
}

let tasks =9

then , max no of tasks for individual = 7 ,1 , 1   therefore (n-2)

min no of tasks =(4,3,2)    =(n/3 + 1)

n=15
max =(13,1,1)
12 2,1
11 3 1
10 4 1
9 5 1
8 6 1
7 6 1

min= (6,5,4)


n=16

min=(6,5,5)

Therefore the list will iterate from (n-2 to (n/3)+1)

n=5

3,1,1
2,1,0


(n-2) * ()