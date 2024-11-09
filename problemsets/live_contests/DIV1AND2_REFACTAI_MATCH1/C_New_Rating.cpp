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

/*------------------------------------*/
#define ceild(a,b) (a+b-1)/b
#define ynw(x) cout<<(x?"YES\n":"NO\n")
#define rall(a) (a).rbegin(), (a).rend()
#define eb emplace_back
#define pb push_back
#define fi first
#define se second
#define stoi stoll
#define mp make_pair
#define rsort(x) sort(rall(x))
#define pii pair<int,int>
#define lb(v,x) (int)(lower_bound(ALL(v),x)-v.begin())
#define ub(v,x) (int)(upper_bound(ALL(v),x)-v.begin())
#define longer __int128_t
#define mkuniq(x) x.erase(unique(x.begin(), x.end()), x.end());

// template<class t> using pqmin=priority_queue<t,vc<t>,greater<t>>;
// template<class t> using pqmax=priority_queue<t>;
/*------------------------------------*/

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


// I didn't even try finish i only knew it was dp :/
// void solve() {
//     // #ifndef LOCAL
//     //     freopen("debug.txt", "w", stderr);
//     // #endif
//     // select intvl [l,r] to skip
//     // a > x -> rating x will increase by 1
//     // a=x -> rating x is unchanged
//     // a < x -> rating x decrease by 1
//     // 1 contest must be skipped

//     int x = 0; // rating
//     int n;
//     cin >> n;
//     vector<int> contests;
//     vector<pii> groups;
//     vector<int> losing(n);
//     for(int i=0; i<n; i++){
//         int a;
//         cin >> a;
//         contests.eb(a);
//     }
//     int ind = 0;
//     pii group = {};
//     bool lost = 0;
//     for(int i=0; i<n; i++){
//         if(x==contests[i]) continue;
//         if(x>contests[i]) {
//             losing[ind]++;
//             if(!lost){
//                 lost = true;
//                 group.first = i;
//             }
//             continue;
//         }
//         if(x<contests[i]){
//             ind++;
//             if(lost){
//                 group.second = i-1;
//                 lost = false;
//             }
//             x++;
//         }
//     }
// }

int solve(){
    
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