#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int t;
    cin >> t;
    for(long long i=0; i<t; i++){
        long long n; // year to determine
        long long k; // number of years that leaves remain
        long long lcount = 0;
        cin >> n >> k;
        for(long long j=1;j<=n;j++){
            if((j+k)-n > 0){
                lcount += j*j;
            }
        }
        string endline = (i<t-1 ? "\n" : "");
        if(lcount % 2){
            cout << "NO"+endline;
            cout << lcount << "\n";
        } else {
            cout << "YES"+endline;
            cout << lcount << "\n";
        }
    }
    return 0;
}