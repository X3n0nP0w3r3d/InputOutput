/**
 *    author:  tourist
 *    created: 17.11.2024 06:34:32
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
    int n;
    cin >> n;
    set<int> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (s.find(x) != s.end()) {
        ans += 1;
        s.erase(x);
      } else {
        s.insert(x);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
