#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    long long input, n;
    cin >> input >> n;
    for(long long i=1; i<=n; i++){
        input % 10 ? input-- : input = input / 10;
    }
    cout << input;
    return 0;
}