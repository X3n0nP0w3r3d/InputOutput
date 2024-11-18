/**
 *    author:  tourist
 *    created: 17.11.2024 06:37:21
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
    if (n < 5) {
      cout << -1 << '\n';
      continue;
    }
    vector<int> a;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1 && i != 5) {
        a.push_back(i);
      }
    }
    a.push_back(5);
    a.push_back(4);
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0 && i != 4) {
        a.push_back(i);
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
  }
  return 0;
}
