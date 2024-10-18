#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    string a,b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    if(a > b){
        cout << 1;
    } else if(a < b){
        cout << -1;
    } else {
        cout << 0;
    }
    return 0;
}