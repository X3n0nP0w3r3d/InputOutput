/**
 *    author:  tourist
 *    created: 17.11.2024 06:39:12
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
    int n, m, L;
    cin >> n >> m >> L;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) {
      cin >> l[i] >> r[i];
    }
    vector<int> x(m), v(m);
    for (int i = 0; i < m; i++) {
      cin >> x[i] >> v[i];
    }
    multiset<int> s;
    int ptr = 0;
    int k = 1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      while (ptr < m && x[ptr] < l[i]) {
        s.insert(v[ptr++]);
      }
      while (k <= r[i] - l[i] + 1) {
        if (s.empty()) {
          ans = -1;
          break;
        }
        k += *prev(s.end());
        s.erase(prev(s.end()));
        ans += 1;
      }
      if (ans == -1) {
        break;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
