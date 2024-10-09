#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // stringstream ss(s);
    // string word;
    // int cnt = 0;
    // while (ss >> word)
    // {
    //     for (int i = 0; i < word.size(); i++)
    //     {
    //         if (word[i] >= 'A' && word[i] <= 'z')
    //         {
    //             cnt++;
    //             break;
    //         }
    //     }
    // }
    // cout << cnt << endl;

    bool inside_word = false;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
                cnt++;
            inside_word = true;
        }
        else
            inside_word = false;
    }
    cout << cnt << endl;
    return 0;
}
