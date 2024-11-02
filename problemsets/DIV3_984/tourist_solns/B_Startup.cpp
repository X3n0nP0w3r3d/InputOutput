/**
 *    author:  tourist
 *    created: 02.11.2024 07:36:02
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
    int n, k;
    cin >> n >> k;
    vector<int> c(k);
    for (int i = 0; i < k; i++) {
      int a, b;
      cin >> a >> b;
      --a;
      c[a] += b;
    }
    sort(c.rbegin(), c.rend());
    // min of n and k since if k is less than n shelves we can sell all the bottles
    // accumulate sums all values in the vector from a start to end
    cout << accumulate(c.begin(), c.begin() + min(n, k), 0) << '\n';
  }
  return 0;
}
