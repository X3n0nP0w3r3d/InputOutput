/**
 *    author:  tourist
 *    created: 02.11.2024 07:54:45
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
    int64_t n;
    cin >> n;
    bool found = false;
    auto Ask = [&](int64_t l, int64_t r) -> int64_t {
      if (found) {
        return 0;
      }
      --r;
      l = max<int64_t>(l, 1);
      r = min(r, n);
      if (l <= r) {
        cout << "xor " << l << " " << r << endl;
        int64_t got;
        cin >> got;
        return got;
      }
      return 0;
    };
    auto Check = [&](int64_t a, int64_t b, int64_t c) -> bool {
      if (1 <= a && a <= n && 1 <= b && b <= n && 1 <= c && c <= n) {
        if (a != b && a != c && b != c) {
          if (Ask(a, a + 1) == a && Ask(b, b + 1) == b && Ask(c, c + 1) == c) {
            found = true;
            cout << "ans " << a << " " << b << " " << c << endl;
            return true;
          }
        }
      }
      return false;
    };
    auto Try = [&](int64_t x, int64_t y, int64_t pref, int bit) {
      assert(y != 0);
      for (int b = bit - 1; b >= 0; b--) {
        auto c = int64_t(1) << b;
        auto q = Ask(pref, pref + c);
        if (q == 0) {
          pref += c;
          continue;
        }
        if (q != y) {
          Check(x, q, y ^ q);
          break;
        }
      }
    };
    auto total = Ask(0, n + 1);
    int64_t pref = 0;
    for (int bit = 59; bit >= 0; bit--) {
      auto c = int64_t(1) << bit;
      auto x = Ask(pref, pref + c);
      auto y = Ask(pref + c, pref + 2 * c);
      if (total == 0) {
        if (x != 0 && y != 0) {
          Try(x, y, pref + c, bit);
          assert(found);
          break;
        }
      } else {
        if (x == 0) {
          assert(y == total);
          pref += c;
        } else {
          if (y == 0) {
            assert(x == total);
          } else {
            Try(x, y, pref + c, bit);
            Try(y, x, pref, bit);
            assert(found);
            break;
          }
        }
      }
    }
    assert(found);
  }
  return 0;
}
