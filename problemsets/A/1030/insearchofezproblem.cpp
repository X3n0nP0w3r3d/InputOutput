#include <bits/stdc++.h>
#define opt(); ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int ez;
        cin >> ez;
        if(ez>0){
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}