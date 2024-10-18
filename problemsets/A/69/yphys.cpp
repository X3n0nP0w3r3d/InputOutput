#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int n,x,y,z = 0;
    int resX,resY,resZ = 0;
    cin >> n;
    cin >> resX >> resY >> resZ;
    for(int i=1;i<n; i++){
        cin >> x >> y >> z;
        resX+=x;
        resY+=y;
        resZ+=z;
    }
    if(resX == 0 && resY == 0 && resZ == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}