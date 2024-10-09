#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello World !";
    // string s("Hello World !"); //--> Constructor...

    string s("Nazmul", 4); //--> 1st 4 ta index print korbe...
    cout << s << endl;

    string a = "Nazmul Hossain";
    string str(a, 4); //--> 1st 4 ta index bade baki gula print korbe...
    cout << str << endl;

    string ss(5, 'Y');  //--> 5 ta Y print korbe...
    cout << ss << endl;

    return 0;
}
