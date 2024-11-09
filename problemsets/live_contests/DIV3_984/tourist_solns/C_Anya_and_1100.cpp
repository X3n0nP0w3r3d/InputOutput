/**
 *    author:  tourist
 *    created: 02.11.2024 07:38:15
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    string s;
    cin >> s;
    int n = int(s.size());
    set<int> a;
    // if substring starting from i is good or not
    // if it is, insert it into set
    // otherwise erase it if it is the set
    auto Update = [&](int i) {
      if (0 <= i && i <= n - 4) {
        if (s.substr(i, 4) == "1100") {
          a.insert(i);
        } else {
          a.erase(i);
        }
      }
    };
    for (int i = 0; i <= n - 4; i++) {
      Update(i);
    }
    int q;
    cin >> q;
    while (q--) {
      int i, v;
      cin >> i >> v;
      --i;
      s[i] = char('0' + v);
      for (int j = i - 3; j <= i; j++) {
        Update(j);
      }
      cout << (a.empty() ? "NO" : "YES") << '\n';
    }
  }
  return 0;
}