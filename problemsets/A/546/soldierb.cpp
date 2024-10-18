#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    // k = first banana price
    // n = money already owned
    // w = bananas needed to buy
    opt();
    long long k,n,w,offset=0;
    cin >> k >> n >> w;
    // n/2(2a+(n-1)d)
    // a = k
    // d = k
    // n = w
    if(w%2 && w > 2)offset+=(2*k + (w-1)*k)/2;
    long long cost = (w/2) * (2*k + (w-1)*k);
    long long borrowed = 0;
    n < cost ? borrowed = (cost+offset) - n : borrowed = 0;
    cout << borrowed;
    return 0;
}