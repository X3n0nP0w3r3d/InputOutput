#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifndef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

auto sum(ll l, ll r){
    // l + l+1 + ... + l+r-2 + l+r-1
    return 1ll*(r-l+1)*(l+r);
}

void solve() {
    #ifndef LOCAL
        freopen("debug.txt", "w", stderr);
    #endif
    int n; // array size
    int k; // starting number
    cin >> n >> k;

    ll i = (n + 1)/2;
    ll minimum = 0;
    int left = k;
    int right = k+n-1;
    if(sum(i, k) > sum(n-i, k+i)){

    }
    // this thing works but too slow (n comparisons whilst 1x10^9 operations ~1 second of runtime and testcase amount can be large)
    // while(left <= right){
    //     if(minimum <= 0){
    //         //cout << "LEFT: " << minimum << endl;
    //         minimum += left;
    //         left++;
    //     } else {
    //         //cout << "Right: " << minimum << endl;
    //         minimum -= right;
    //         right--;
    //     }
    // }
    
    // cout << to_string(abs(minimum)) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}