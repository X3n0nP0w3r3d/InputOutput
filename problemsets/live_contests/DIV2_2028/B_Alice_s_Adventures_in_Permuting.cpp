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
#define cdiv(a,b) (a+b-1)/b
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
#define countn(x, y) count(all(x), y);

template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;

// template<class t> using pqmin=priority_queue<t,vc<t>,greater<t>>;
// template<class t> using pqmax=priority_queue<t>;
/*------------------------------------*/
const int MX = (int)2e5 + 5;
/*------------------------------------*/

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    // #ifndef LOCAL
    //     freopen("debug.txt", "w", stderr);
    // #endif
    ll n,b,c;
    ll mxindx=0;
    ll mxval=0;
    ll cnt = 0;
    cin >> n >> b >> c;
    vector<ll> a(n);
    auto MEX = [&](ll l, ll r){
        for(ll i=0; i<r-l; i++){
            if(a[i]!=l+i && i!=0){
                return l+i;
            }
        }
        return -1ll;
    };
    for(ll i=1; i<=n; i++){
        a[i-1]=b*(i-1)+c;
        if(a[i-1] > mxval){
            mxval = a[i-1];
            mxindx = i-1;
        }
    }
    dbg(a, MEX(a[0], a[n-1]), mxindx);
    while(MEX(a[0], a[n-1] != -1ll)){
        ll val = MEX(a[0], a[n-1]);
        if(val < 0) break;
        a[mxindx] = MEX(a[0], a[n-1]);
        cnt++;
    }
    cout << cnt << "\n";
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

/** important stuff to remember 
 * no getting stuck on a singular approach
 * edge cases (duplicate values? crazy large values?)
 * document thoughts
 */