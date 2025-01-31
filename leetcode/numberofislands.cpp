#include <bits/stdc++.h>

using namespace std;

//#ifdef LOCAL
#ifndef ONLINE_JUDGE
//template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
//template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
const string PAIR_LEFT = "(";
const string PAIR_RIGHT = ")";
const string IT_LEFT = "[";
const string IT_RIGHT = "]";
const string PAIR_SEP = ", ";
const string IT_SEP = ", ";
// benq - print any container + pair
template<typename T, typename = void> struct is_iterable : false_type {};
template<typename T> struct is_iterable<T, void_t<decltype(begin(declval<T>())),decltype(end(declval<T>()))>> : true_type {};
template<typename T> typename enable_if<is_iterable<T>::value&&!is_same<T, string>::value,ostream&>::type operator<<(ostream &os, T const &v);
template<typename A, typename B> ostream& operator<<(ostream &os, pair<A, B> const &p) { return os << PAIR_LEFT << p.first << PAIR_SEP << p.second << PAIR_RIGHT; }
template<typename T> typename enable_if<is_iterable<T>::value&&!is_same<T, string>::value,ostream&>::type operator<<(ostream &os, T const &v) {
    os << IT_LEFT; 
    for (auto it = v.begin(); it != v.end();) {
        os << *it;
        if (++it != v.end()) os << IT_SEP;
    }
    return os << IT_RIGHT;
}
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
using vl = vector<ll>;
using pl = pair<ll, ll>;
typedef unsigned long long ull;

/*------------------------------------*/
#define cdiv(a,b) ((a)+(b)-1)/(b)
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
#define nseries(n) ((n)*((n)+1LL))/2LL
#define EACH(x, a) for (auto& x: a)

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)

// atcoder stuff
#define atynw(x) cout<<((x)?"Yes\n":"No\n")
//

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

// mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
// mt19937_64 rng(61378913);
/* usage - just do rng() */

// struct custom_hash {
//     static uint64_t splitmix64(uint64_t x) {
//         // http://xorshift.di.unimi.it/splitmix64.c
//         x += 0x9e3779b97f4a7c15;
//         x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//         x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//         return x ^ (x >> 31);
//     }

//     size_t operator()(uint64_t x) const {
//         static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//         return splitmix64(x + FIXED_RANDOM);
//     }
// };

// unordered_map<long long, int, custom_hash> safe_map;
// gp_hash_table<long long, int, custom_hash> safe_hash_table;
 

// template<class t> using pqmin=priority_queue<t,vc<t>,greater<t>>;
// template<class t> using pqmax=priority_queue<t>;
/*------------------------------------*/
const int MX = (int)2e5 + 5;
/*------------------------------------*/

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// void usaco(string filename) {
//     freopen((filename + ".in").c_str(), "r", stdin);
//     freopen((filename + ".out").c_str(), "w", stdout);
// }

void bfs(int &a, int&b, set<pii>& visited, vt<vt<char>>& grid){
    queue<pii> q;
    q.push(mp(a,b));
    while(sza(q)){
        pii node = q.front();
        q.pop();
        if(visited.find(node)!=visited.end())continue;
        visited.insert(node);
        vt<pii> checks = {{node.fi+1, node.se}, {node.fi-1, node.se}, {node.fi, node.se+1}, {node.fi, node.se-1}};
        for(auto i : checks){
           if(i.fi < 0 || i.fi > sza(grid)-1 || i.se < 0 || i.se > sza(grid[0])-1 || grid[i.fi][i.se]=='0')continue;
           q.push(i);
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    set<pii> visited;
    int cnt = 0;
    FOR(j, sza(grid))FOR(i, sza(grid[j])){
        if(grid[j][i]=='1' && visited.find(mp(j, i))==visited.end()){
            cnt++;
            bfs(j, i, visited, grid);
        }
    }
    return cnt;
}

/* OPTIMAL SOLUTION
const auto _ = std::cin.tie(nullptr)->sync_with_stdio(false);

#define LC_HACK
#ifdef LC_HACK
const auto __ = []() {
    struct ___ {
        static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
    };
    std::atexit(&___::_);
    return 0;
}();
#endif
class Solution
{
    public:
        void rec(vector<vector < char>> &grid, int i, int j)
        {
            if (grid[i][j] == 0)
                return;
            grid[i][j] = '2';
            if (i > 0 && grid[i - 1][j] == '1')
                rec(grid, i - 1, j);
            if (j > 0 && grid[i][j - 1] == '1')
                rec(grid, i, j - 1);
            if (j + 1 < grid[0].size() && grid[i][j + 1] == '1')
                rec(grid, i, j + 1);
            if (i + 1 < grid.size() && grid[i + 1][j] == '1')
                rec(grid, i + 1, j);
        }
    int numIslands(vector<vector < char>> &grid)
    {
        int n = 0;
        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (grid[i][j] == '1')
                {
                    n++;
                    rec(grid, i, j);
                }
            }
        return n;
    }
};
*/

void solve() {
    // #ifndef LOCAL
    //     freopen("debug.txt", "w", stderr);
    // #endif
    //vt<vt<char>> input = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    vt<vt<char>> input = {{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
    cout << numIslands(input);
}

int main() {
	//#define benchmark_local
	// #ifdef benchmark_local
    //     auto begin = std::chrono::high_resolution_clock::now();
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
	cout << setprecision(12) << fixed;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

	// #ifdef benchmark_local
    //     auto end = std::chrono::high_resolution_clock::now();
    //     cerr << setprecision(4) << fixed;
    //     cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
    // #endif
}

/** important stuff to remember 
 * no getting stuck on a singular approach
 * edge cases (duplicate values? crazy large values?)
 * document thoughts
 */