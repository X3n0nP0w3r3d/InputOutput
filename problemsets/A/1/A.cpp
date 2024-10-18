#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main(){
    // main takeaway is optimising code using division instead of while loops to count LOL
    opt();
    long long x,y,a,countX,countY = 0;
    cin >> x >> y >> a;
    countX = ceil(x/a);
    countY = ceil(y/a);
    if(x%a > 0) countX++;
    if(y%a > 0) countY++;
    cout << countX*countY;
    return 0;
}