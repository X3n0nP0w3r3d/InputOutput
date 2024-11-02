/**
 *    author:  tourist
 *    created: 02.11.2024 07:32:04
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
      int x = abs(a[i] - a[i + 1]);
      ok &= (x == 5 || x == 7);
    }
    cout << (ok ? "YES" : "NO") << '\n';
  }
  return 0;
}
