#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int stops;
    int minReq = -1;
    int currentHolding = 0;
    cin >> stops;
    for(int i=0; i<stops; i++){
        int exit;
        int enter;
        cin >> exit >> enter;
        currentHolding -= exit;
        currentHolding += enter;
        minReq = max(minReq, currentHolding);
    }
    cout << minReq;
    return 0;
}