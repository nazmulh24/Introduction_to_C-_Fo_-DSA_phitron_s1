#include <bits/stdc++.h>
using namespace std;

int main()
{
    char S[100001];
    while (cin.getline(S, 100001))
    {
        int len = strlen(S);
        sort(S, S + len);
        int i = 0, j = 0;
        while (i < len)
        {
            if (S[i] != ' ')
            {
                S[j] = S[i];
                j++;
            }
            i++;
        }
        S[j] = '\0';
        cout << S << endl;
    }
    return 0;
}
