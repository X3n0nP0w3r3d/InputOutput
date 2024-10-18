#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main(){
    // 7 1s in a row = dangerous
    opt();
    int count_one, count_zero = 0;
    string lineup;
    cin >> lineup;
    for(auto member : lineup){
        if(member == '1'){
            count_one++;
            count_zero=0;
        } else {
            count_zero++;
            count_one=0;
        }
        if(count_one >=7 || count_zero >= 7){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}