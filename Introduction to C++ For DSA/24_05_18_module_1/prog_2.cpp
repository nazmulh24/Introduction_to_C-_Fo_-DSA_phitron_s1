#include <bits/stdc++.h>
#include <iomanip>  //--> Header 
using namespace std;

int main()
{
    int a = 10;
    double b = 13.2312121;
    char c;
    cin >> c;
    cout << "C er int value : " << (int)c << endl; //--> Type casting...

    //--> set precision.. floting point koto ghor...
    cout << a << " " << fixed << setprecision(2) << b << endl;
    
    return 0;
}
