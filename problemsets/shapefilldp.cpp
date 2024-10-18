#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long memo[60];
    memo[0] = 1;
    memo[1] = 0;
    cin >> n;
    for(int i = 2; i <= n; i++){
        memo[i] = 2 * memo[i-2];
    }
    cout << memo[n];
    return 0;
}