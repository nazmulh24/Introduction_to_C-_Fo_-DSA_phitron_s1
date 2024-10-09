#include <bits/stdc++.h>
using namespace std;

class Fre
{
public:
    char val;
    int cnt;
};

bool cmp(Fre a, Fre b)
{
    return (a.cnt > b.cnt);
}

int main()
{
    string s;
    cin >> s;
    Fre ff[26] = {0};
    for (int i = 0; i < 26; i++)
    {
        ff[i].val = char(i + 'a');
        ff[i].cnt = 0;
    }

    for (auto c : s)
    {
        int ascii = int(c - 'a');
        ff[ascii].cnt++;
    }

    sort(ff, ff + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        if (ff[i].cnt > 0)
        {
            // cout << ff[i].val << " " << ff[i].cnt << endl;
            for (int j = 0; j < ff[i].cnt; j++)
                cout << ff[i].val;
        }
    }

    return 0;
}
