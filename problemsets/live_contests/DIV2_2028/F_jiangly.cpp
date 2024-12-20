#include <bits/stdc++.h>

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;
using u128 = unsigned __int128;

constexpr int M = 1E4;
using B = std::bitset<M + 1>;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i] = std::min(a[i], m + 1);
    }
    
    std::vector<std::pair<int, B>> dp;
    dp.emplace_back(a[0], 1);
    
    for (int i = 1; i < n; i++) {
        if (a[i] == 0) {
            B b {};
            for (auto &[x, y] : dp) {
                b |= y;
                b |= y << x;
            }
            dp = {std::pair(0, b)};
        } else {
            B b {};
            for (auto &[x, y] : dp) {
                b |= y << x;
                x *= a[i];
                x = std::min(x, m + 1);
            }
            while (dp.size() >= 2 && dp[dp.size() - 2].first == m + 1) {
                auto [_, y] = dp.back();
                dp.pop_back();
                dp.back().second |= y;
            }
            int j = 0;
            while (j < dp.size() && dp[j].first < a[i]) {
                j++;
            }
            if (j < dp.size() && dp[j].first == a[i]) {
                dp[j].second |= b;
            } else {
                dp.insert(dp.begin() + j, std::pair(a[i], b));
            }
        }
    }
    
    for (auto &[x, y] : dp) {
        if (x <= m && y[m - x]) {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
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