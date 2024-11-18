/**
 *    author:  tourist
 *    created: 17.11.2024 06:41:58
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
    auto Ask = [&](int l, int r) {
      if (r - l <= 1) {
        return 0;
      }
      cout << "? " << l + 1 << " " << r << endl;
      int got;
      cin >> got;
      return got;
    };
    int x = Ask(0, n);
    if (x == 0) {
      cout << "! IMPOSSIBLE" << endl;
      continue;
    }
    string s = "";
    for (int i = 0; i < n; i++) {
      int y = Ask(i + 1, n);
      if (y == x) {
        s += "1";
      } else {
        s += "0";
        if (y == 0) {
          s += string(x, '1');
          s.resize(n, '0');
          break;
        }
        x = y;
      }
    }
    cout << "! " << s << endl;
  }
  return 0;
}
