#include <iostream>
using namespace std;

int main()
{

    //creating a 2x2 array in CPP

    int m = 2;
    int n = 2;
    int sum = 0;
    int matrix1[2][2];
    int matrix2[2][2];
    int final[2][2];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element [" << i << "]"
                 << "[" << j << "] of Matrix 1 : ";
            cin >> matrix1[i][j];
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element [" << i << "]"
                 << "[" << j << "] of Matrix 2 : ";
            cin >> matrix2[i][j];
            cout << endl;
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "X" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "=" << endl;

    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            for (int z = 0; z < 2; z++)
            {
                int first = matrix1[x][z];
                int second = matrix2[z][y];
                sum += (first * second);
            }
            final[x][y] = sum;
            sum = 0;
        }
    }
    //printing final ans
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << final[i][j] << "\t";
        }
        cout << endl;
    }
}
