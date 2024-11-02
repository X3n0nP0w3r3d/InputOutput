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



void solve() {
    // #ifndef LOCAL
    //     freopen("debug.txt", "w", stderr);
    // #endif
    int n;
    cin >> n;
    int sr=0;
    int dm=0;
    bool sd=0;
    vector<int> cards;
    for(int i=0;i<n;i++){
        int nm;
        cin >> nm;
        cards.emplace_back(nm);
    }
    int l = 0;
    int r=cards.size()-1;
    for(int tn=0;tn<n;tn++){
        if(cards[l] > cards[r]){
            tn%2 ? dm+=cards[l] : sr+= cards[l];
            l++;
        } else {
            tn%2 ? dm+=cards[r] : sr+= cards[r];
            r--;
        }
    }
    cout << sr << " " << dm;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}