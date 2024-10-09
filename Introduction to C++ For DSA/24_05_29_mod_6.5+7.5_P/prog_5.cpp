#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int char_val[26];
    for (char i = 'A'; i <= 'Z'; i++)
      char_val[i] = 2;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (char_val[i + 65] == 2 && s[i] == char_val[i + 65]) {
        cnt += 2;
        char_val[i + 65]--;
      } else
        cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}
t