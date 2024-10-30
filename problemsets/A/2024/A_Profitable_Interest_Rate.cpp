#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
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
    // PASS
    
    // EDITORIAL BASED SOLUTION
    // x coins deposited into unprofitable
    // a - x >= b - 2x needs to be satisfied to deposit into profitable
    // thus max(0, b-a) coins deposited into unprofitable required
    // rest of coins can be in profitable deposit

    int a;
    int b;
    cin >> a >> b;
    int deposit = max(0, b-a);
    a-=deposit;
    if(a>0){
        cout<<a<<"\n";
    } else {
        cout << 0 << "\n";
    }
    // INITIAL SOLUTION - Found difference between two and used that as minimum deposit, if deposit required > a then print 0
    // decrease a by deposit and b by deposit*2
    // If a < b but deposit required is less than a then decrement a and print a

    // int a; // alice coins
    // int b; // profitable deposit minimum
    // cin >> a >> b;
    // int diff = b-a;
    // if(a >= b){
    //     cout << a << "\n";
    //     return;
    // }
    // if(diff > a){
    //     cout << 0 << "\n";
    //     return;
    // }
    // a-=diff;
    // b-=diff*2;
    // if(b > a){
    //     a--;
    // }
    // cout << a << "\n";


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