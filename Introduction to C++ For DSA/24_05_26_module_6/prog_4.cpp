#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss) //--> reference...
{
    string word;
    if (ss >> word)
    {
        cout << word << endl; //--> normal print...
        print(ss);
        cout << word << endl; //--> reverse print...
    }
}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    // string word;
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }

    print(ss);

    return 0;
}
