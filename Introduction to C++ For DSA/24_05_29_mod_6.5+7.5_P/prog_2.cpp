#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool f_word = true;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!f_word)
            cout << " ";
        cout << word;
        f_word = false;
    }
    return 0;
}
