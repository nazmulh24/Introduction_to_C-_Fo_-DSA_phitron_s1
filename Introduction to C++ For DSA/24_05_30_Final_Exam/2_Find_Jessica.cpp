#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool x = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            x = true;
            break;
        }
    }
    if (x)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
