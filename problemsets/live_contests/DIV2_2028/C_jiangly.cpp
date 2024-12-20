#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

void solve() {
    int n, m, v;
    std::cin >> n >> m >> v;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    std::vector<i64> pre(n + 1);
    for (int i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + a[i];
    }
    
    i64 ans = -1;
    
    std::vector<int> f(m + 1), g(m + 1);
    for (int i = 1, j = 0; i <= m; i++) {
        while (j <= n && pre[j] - pre[f[i - 1]] < v) {
            j++;
        }
        f[i] = j;
    }
    g[0] = n;
    for (int i = 1, j = n; i <= m; i++) {
        while (j >= 0 && pre[g[i - 1]] - pre[j] < v) {
            j--;
        }
        g[i] = j;
    }
    
    for (int i = 0; i <= m; i++) {
        if (f[i] <= g[m - i]) {
            ans = std::max(ans, pre[g[m - i]] - pre[f[i]]);
        }
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