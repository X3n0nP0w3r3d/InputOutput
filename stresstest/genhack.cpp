// #include <bits/stdc++.h>

// using namespace std;

// const int N = 2e5;

// vector<int> primes;
// bool is_prime[N]; 
// // use bitset<N> is_prime; to have O(N/64) memory complexity
// // using bitset you can solve upto around N = 10^8 in 1s
// void sieve_v0() {
//   for (int i = 2; i < N; i++) {
//     is_prime[i] = true;
//   }
//   for (int i = 2; i * i < N; i++) {
//     if (is_prime[i]) {
//       for (int j = i * i; j < N; j += i) {
//         is_prime[j] = false;
//       }
//     }
//   }
//   for (int i = 2; i < N; i++) {
//     if (is_prime[i]) {
//       primes.push_back(i);
//     }
//   }
// }

// vector<long long>n(2e5);
// int main() {
//     sieve_v0();
//     // for(int i=0; i<1e4; i++){
//     //     n[i]=2e5;
//     //     if(n[i]>2e5){
//     //         n[i] = 2e5;
//     //     }
//     // }
//     vector<int>test1(2e5, 181837);
//     cout << "1\n20000\n";
//     for(auto i : test1){
//         cout << i << " ";
//     }
// }

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
#define pll pair<long long,long long>
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

mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */
 

// template<class t> using pqmin=priority_queue<t,vc<t>,greater<t>>;
// template<class t> using pqmax=priority_queue<t>;
/*------------------------------------*/
const int MX = (int)2e5 + 5;
/*------------------------------------*/

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

std::uniform_int_distribution<std::mt19937::result_type> dist2(1,1e5);
std::uniform_int_distribution<std::mt19937::result_type> dist(0,1e9);

void solve() {
    // int n = dist2(rng);
    // int k = dist(rng);
    // cout << "1\n";
    // set<int>S;
    // FOR(n){
    //     S.insert(dist(rng));
    // }
    // cout << sza(S) << " " << k <<"\n";
    // for(auto i : S){
    //     cout << i << (i==*max_element(all(S)) ? "" : " ");
    // }
    cout << "100\n";
    set<int> us;
    while(sza(us)<200){
        //int n = dist2(rng);
        int k = dist(rng);
        us.insert(k);
    }
    int s = -1;
    for(auto i : us){
        if(s)cout << i << " ";
        else cout << i << "\n";
        s + 1 > 1 ? s = 0 : s++;
    }
}

int main() {
	//#define benchmark_local
	#ifdef benchmark_local
        auto begin = std::chrono::high_resolution_clock::now();
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
	cout << setprecision(12) << fixed;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

	#ifdef benchmark_local
        auto end = std::chrono::high_resolution_clock::now();
        cerr << setprecision(4) << fixed;
        cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
    #endif
}