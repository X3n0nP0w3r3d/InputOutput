#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int t; // test cases no
    cin >> t;
    int n; // no of ppl
    int k; // threshold which robin takes gold
    for(int i=0; i<t; i++){
        int receivers = 0; // no of ppl receiving gold from robin hood
        int robingold = 0; // amount of gold robin has
        cin >> n >> k;
        for(int j=0; j<n; j++){
            int gold;
            cin >> gold;
            if(gold >= k){
                robingold += gold;
            } else if(gold == 0 && robingold > 0){
                receivers++;
                robingold--;
            }
        }
        cout << receivers << (i==t-1 ? "" : "\n");
    }
    return 0;
}