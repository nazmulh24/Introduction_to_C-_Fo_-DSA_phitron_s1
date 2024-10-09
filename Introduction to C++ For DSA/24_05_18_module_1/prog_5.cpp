#include <bits/stdc++.h>
#include <string.h> //--> Header
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << a << endl;

    getchar(); //--> For avoiding Enter error...

    char ch[20];
    // cin >> ch;  //--> Not get input multiple word...
    cin.getline(ch, 20);

    cout << ch << endl;
    return 0;
}
