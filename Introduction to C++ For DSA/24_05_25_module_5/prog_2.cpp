#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "Nazmul";

  // cout << s.size() << endl;
  // cout << s.max_size() << endl;

  // string a = "aSDFGHJKQwertyuiosdfghj";
  // cout << a.capacity() << endl;
  // a = "hdfgsfshkgfdsfhgdhgsdfhkgdskfhsdhfgkdsghfsdfhksdfjsdkf";
  // cout << a.capacity() << " " << a.size() << endl;

  // cout << s << endl;
  // s.clear();
  // cout << s << endl;

  //   string str = "Hello";
  //   if (str.empty())
  //     cout << "Empty";
  //   else
  //     cout << "Not Empty";

  s.resize(10, '-');
  cout << s << endl;

  return 0;
}
