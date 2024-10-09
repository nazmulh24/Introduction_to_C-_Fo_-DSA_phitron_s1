#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n); //--> Ascending Sort.
    //--> sort (start_point, end_point);
    //--> sort(a, a + 2);  --> sort firt 2 element...
    //--> sort(a, a + x);  --> sort firt x element...

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    sort(a, a + n, greater<int>()); //--> Descending Sort.

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
