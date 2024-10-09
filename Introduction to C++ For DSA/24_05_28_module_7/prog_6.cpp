#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int fre[26] = {0};
    for (auto u : s)
    {
        fre[u - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        // cout << i << " " << fre[i - 'a'] << endl;
        for (int j = 0; j < fre[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}
