#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s = "dhruv";

    // How to transform string to uppercase

    // transform(s.begin(), s.end(), s.begin(), ::toupper);

    // Create the largest number from the given string

    string p = "38273293893122";

    sort(p.begin(), p.end(), greater<int>());

    // cout << p;

    // to count the occurences of letters

    string ent;

    cout << "Enter The String : ";
    cin >> ent;

    transform(ent.begin(), ent.end(), ent.begin(), ::tolower);

    int alph[26];

    for (int i = 0; i < 26; i++)
    {
        alph[i] = 0;
    }
    for (int i = 0; i < ent.size(); i++)
    {
        alph[ent[i] - 'a']++;
    }

    cout << "Occurences of the letters are as follows ---> " << endl;
    for (int i = 0; i < 26; i++)
    {
        if (alph[i] > 0)
        {
            cout << (char)(i + 'a') << " occured " << alph[i] << " times ;" << endl;
        }
    }
    return 0;
}