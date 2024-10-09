#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        // string ss(n, c);
        // cout << ss << endl;

        for (int i = 0; i < n; i++)
            cout << c << " ";
        cout << endl;
    }
    return 0;
}
