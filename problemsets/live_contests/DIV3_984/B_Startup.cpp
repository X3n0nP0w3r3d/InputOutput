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
    int n; // shelves
    int k; // bottles
    int b; // brand
    int c; // cost

    int profit=0;
    int taken=0;

    unordered_set<int> brands;
    cin >> n >> k;
    // cost, brand
    priority_queue<pair<int, int>> bottles_q;
    vector<int> brand_val(k+1, 0);
    for(int i=0; i<k; i++){
        cin >> b >> c;
        brand_val[b] += c;
    }
    for(int j=0;j<k;j++){
        bottles_q.push({brand_val[j+1], j});
    }
    for(int z=0; z<k; z++){
        auto bl = bottles_q.top();
        if(brands.count(bl.second)>0){
            profit+= bl.first;
        } else if (taken < n){
            taken++;
            profit+=bl.first;
            brands.insert(bl.second);
        }
        bottles_q.pop();
    }
    cout << profit << "\n";
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