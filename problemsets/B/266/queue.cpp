// ATTEMPTS 2
// WRONG ANSWER TEST 6: https://codeforces.com/problemset/submission/266/286199336
// ACCEPTED: https://codeforces.com/problemset/submission/266/286200202
// NOTES - basically swapping but when swaps are performed do add/decrease iterator so that it doesn't continually swap G in front of B in one pass

#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int n;
    int time;
    cin >> n >> time;
    string line;
    cin >> line;
    while(time--){
        for(int i=n-1; i>0; i--){
            if(line[i] == 'G' && line[i-1] == 'B'){
                line[i-1] = 'G';
                line[i] = 'B';
                i--;
            }
        }
    }
    cout << line;
    return 0;
}
