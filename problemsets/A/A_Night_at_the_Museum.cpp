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

int rotate(int pos, char t, bool reverse){
    int tm = t;
    if(reverse){
    }
}

// first attempt - AC w/ editorial
// void solve() {
//     // #ifndef LOCAL
//     //     freopen("debug.txt", "w", stderr);
//     // #endif
//     string ip;
//     cin >> ip;
//     int nd = 26;
//     int s = ip.size();
//     int c = min(abs(ip[0]-'a'), abs(nd-abs(ip[0]-'a')));
//     for(int i=0; i<s-1; i++){
//        int dist = min(abs(ip[i]-ip[i+1]), nd-abs(ip[i]-ip[i+1]));
//        c+= dist;
//     }
//     cout << c;
// }

// second attempt w/o editorial - AC
void solve(){
    string s;
    cin >> s;
    int l = s.size();
    int nd = 26; // position of z (end of alphabet)
    int c = min(abs(s[0] - 'a'), abs(nd - abs(s[0] - 'a')));
    for(int i=0; i<l-1; i++){
        c +=  min(abs(s[i] - s[i+1]), abs(nd - abs(s[i] - s[i+1])));
    }
    cout << c;
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