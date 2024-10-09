#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
    cout << endl;

    delete[] a; //--> delate this array...

    for (int i = 0; i < 3; i++)
        cout << a[i] << " ";
    cout << endl;

    a = new int[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
