/**
 *    author:  tourist
 *    created: 31.03.2018 11:41:48       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  for (int qq = 1; qq <= tt; qq++) {
    cout << "Case #" << qq << ": ";
    int len;
    cin >> len;
    string s;
    cin >> s;
    for (int i = 0; i < (int) s.size(); i++) {
      s[i] ^= 'E' ^ 'S';
    }
    cout << s << '\n';
  }
  return 0;
}

