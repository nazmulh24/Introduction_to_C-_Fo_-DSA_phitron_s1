#include <bits/stdc++.h>
using namespace std;

namespace nazmul
{
    int age = 21;
    void hello()
    {
        cout << "Nazmul namespace" << endl;
    }
    // class Test
    // {
    // };
}

namespace shadhin
{
    int age2 = 20;
    void hello2()
    {
        cout << "Shadhin Namespace" << endl;
    }
}

using namespace nazmul;
using namespace shadhin;

int main()
{
    // cout << nazmul::age << endl;
    // cout << shadhin::age2 << endl;

    cout << age << endl;
    cout << age2 << endl;

    return 0;
}
