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

int minimumMountainRemovals(vector<int>& nums) {
    int N = nums.size();

    vector<int> lisLength(N, 1);
    vector<int> ldsLength(N, 1);

    // Stores the length of longest increasing subsequence that ends at i.
    for (int i = 0; i < N; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (nums[i] > nums[j]) {
                lisLength[i] = max(lisLength[i], lisLength[j] + 1);
            }
        }
    }

    // Stores the length of longest decreasing subsequence that starts at i.
    for (int i = N - 1; i >= 0; i--) {
        for (int j = i + 1; j < N; j++) {
            if (nums[i] > nums[j]) {
                ldsLength[i] = max(ldsLength[i], ldsLength[j] + 1);
            }
        }
    }

    int minRemovals = INT_MAX;
    for (int i = 0; i < N; i++) {
        if (lisLength[i] > 1 && ldsLength[i] > 1) {
            minRemovals =
                min(minRemovals, N - lisLength[i] - ldsLength[i] + 1);
        }
    }

    return minRemovals;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //vector<int> input={1,2,3,5,6,3,2,1,3,4,5,6,7,8,9};
    //vector<int> input = {1,2,3,4,4,3,2,1};
    //vector<int> input={2,1,1,5,6,2,3,1};
    vector<int> input = {9,8,1,7,6,5,4,3,2,1};
    cout << minimumMountainRemovals(input);
}