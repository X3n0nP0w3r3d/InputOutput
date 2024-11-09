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



void solve() {
    // #ifndef LOCAL
    //     freopen("debug.txt", "w", stderr);
    // #endif
    int n,m;
    cin >> n >> m;
    vector<int> boxes;
    map<int,int> cnt;
    ll maxcnt = 0;
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        cnt[b] += a;
        boxes.pb(b);
    }
    rsort(boxes);
    //boxes.erase(unique(boxes.begin(), boxes.end()), boxes.end());
    mkuniq(boxes);
    for(int i=0; i<sza(boxes); i++){
        if(n <= 0) break;
        if(n < cnt[boxes[i]]){
            maxcnt += boxes[i] * n;
            n = 0;
        } else {
            n-=cnt[boxes[i]];
            maxcnt += boxes[i] * cnt[boxes[i]];
        }
    }
    cout << maxcnt;
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