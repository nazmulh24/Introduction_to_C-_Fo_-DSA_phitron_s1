#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        int cnt_e = 0, ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                cnt_e++;
        }

        if (n % 2 != 0)
            cout << "-1" << endl;
        else
        {
            ans = abs(n / 2 - cnt_e);
            cout << ans << endl;
        }
    }
    return 0;
}
