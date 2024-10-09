#include <bits/stdc++.h>
using namespace std;

int *fun() //------> Dynamic variable.
{
    int *a = new int;
    *a = 10;

    return a;
}

int main()
{
    int *p = fun();
    cout << *p << endl;

    return 0;
}
