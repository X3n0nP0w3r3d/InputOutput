#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

void solve() {
    i64 n, b, c;
    std::cin >> n >> b >> c;
    
    i64 ans = -1;
    if (b != 0) {
        ans = n - (c < n ? (n - 1 - c) / b + 1 : 0);
    } else if (c >= n) {
        ans = n;
    } else if (n - c >= 3) {
        ans = -1;
    } else {
        ans = n - 1;
    }
    
    std::cout << ans << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}