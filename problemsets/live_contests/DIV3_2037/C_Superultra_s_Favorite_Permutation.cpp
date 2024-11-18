#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
//#ifdef LOCAL
#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define vt vector

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
#define mkuniq(x) x.erase(unique(x.begin(), x.end()), x.end())
#define countn(x, y) count(all(x), y)
#define uppercase(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
#define nseries(n) (n*(n+1))/2
#define EACH(x, a) for (auto& x: a)

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)

template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
	cin >> x;
}
void read(double& d) {
	string t;
	read(t);
	d=stod(t);
}
void read(long double& d) {
	string t;
	read(t);
	d=stold(t);
}
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
template<class A> void read(vt<A>& x) {
	EACH(a, x)
		read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
	EACH(a, x)
		read(a);
}

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
  // yeah this shit doesnt work btw
    // #ifndef LOCAL
    //     freopen("debug.txt", "w", stderr);
    // #endif
    // int n;
    // cin >> n;
    // if(n <= 3){
    //     cout << -1 << "\n";
    //     return;
    // }
    // string start = "1 8 7 3 6 2 4 5";
    // string res = start;
    // if(n > 8){
    //     vt<int> nums(n-8);
    //     iota(nums.begin(), nums.end(), 9);
    //     int pt = 0;
    //     int lastnum = 5;
    //     while(sza(nums) > 0){
    //         if(getDivisors(lastnum + nums[pt]) > 2){
    //             res+= nums[pt]+" ";
    //             lastnum = nums[pt];
    //             nums.erase(nums.begin()+pt);
    //             pt = 0;
    //         } else {
    //             pt++;
    //         }
    //         if(pt > sza(nums)-1){
    //             cout << -1;
    //             return;
    //         }
    //     }
    // } else {
    //     cout << -1 << "\n";
    //     return;
    // }
    // cout << res;
    // cout << "\n";
    int n;
    cin >> n;
    if (n < 5) {
      cout << -1 << '\n';
      return;
    }
    vector<int> a;
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1 && i != 5) {
        a.push_back(i);
      }
    }
    a.push_back(5);
    a.push_back(4);
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0 && i != 4) {
        a.push_back(i);
      }
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " \n"[i == n - 1];
    }
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