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

//rainboy soln
#define N	5000
#define M	5000
 
long long min(long long a, long long b) { return a < b ? a : b; }

int main() {
	int t;
 
	scanf("%d", &t);
	while (t--) {
		static int aa[N], kk[N];
		static long long ans[M + 1];
		int n, m, k, i, i_, j, j_;
		long long s, t, u, c, v, x, x_, y;
 
		scanf("%d%d%lld", &n, &m, &u);
		s = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &aa[i]);
			s += aa[i];
		}
		x = 0, y = s;
		for (i = 0; i < n; i++)
			x += (long long) aa[i] * aa[i] * n;
		for (k = 1; k <= m; k++)
			ans[k] = x - s * s;
		for (t = 0; t <= n * m * 2; t += 2) {
			c = u * (s * 2 + t * u);
			memset(kk, 0, n * sizeof *kk);
			for (k = 1; k <= m; k++) {
				x_ = 0, i_ = 0, j_ = -1;
				x = 0;
				for (i = 0, j = 0; j < n; j++) {
					v = c - u * (aa[j] * 2 + u * (kk[j] * 2 + 1)) * n;
					if ((x += v) < 0)
						x = 0, i = j + 1;
					else {
						if (x_ < x)
							x_ = x, i_ = i, j_ = j + 1;
					}
				}
				x = 0;
				for (i = n - 1, j = n - 1; j >= 0; j--) {
					v = u * (aa[j] * 2 + u * (kk[j] * 2 - 1)) * n - c;
					if (kk[j] == 0 || (x += v) < 0)
						x = 0, i = j - 1;
					else {
						if (x_ < x)
							x_ = x, i_ = i, j_ = j - 1;
					}
				}
				if (x_ > 0) {
					while (i_ < j_)
						kk[i_++]++;
					while (i_ > j_)
						kk[i_--]--;
				}
				x = 0, y = 0;
				for (i = 0; i < n; i++) {
					x += (aa[i] + u * kk[i]) * (aa[i] + u * kk[i]) * n;
					y += aa[i] + u * kk[i];
				}
				ans[k] = min(ans[k], x - y * y);
			}
		}
		for (k = 1; k <= m; k++)
			printf("%lld ", ans[k]);
		printf("\n");
	}
	return 0;
}

/** important stuff to remember 
 * no getting stuck on a singular approach
 * edge cases (duplicate values? crazy large values?)
 * document thoughts
 */