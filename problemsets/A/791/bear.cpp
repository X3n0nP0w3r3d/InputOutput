#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int l,b;
    int years=0;
    cin >> l >> b;
    while(l <= b){
        l *= 3;
        b *= 2;
        years++;
    }
    cout << years;
    return 0;
}