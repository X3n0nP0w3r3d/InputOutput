#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    string stones;
    int min,n=0;
    cin >> n >> stones;
    for(int i=1;i<n; i++){
        if(stones[i-1]==stones[i]) min++;
    }
    cout << min;
    return 0;
}