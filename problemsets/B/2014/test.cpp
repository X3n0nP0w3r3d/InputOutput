#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        unordered_map<int, long> leaves;
        int n; // year to determine
        int k; // number of years that leaves remain
        long long lcount = 0;
        cin >> n >> k;
        for(int j=1;j<=n;j++){
            leaves.insert({j,pow(j, j)});
        }
        for(auto year : leaves){
            if(year.first+k-n > 0){
                lcount += year.second;
            }
        }
        if(lcount % 2){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}