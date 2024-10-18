#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main(){
    int n;
    cin >> n;
    int result = 0;
    int count = 0;
    for(int i = 0; i<=n*3; i++){
        int input;
        cin >> input;
        if(i%3 == 0){
            if(count > 1) result++;
            count=0;
        };
        if(input==1) count++;
    }
    cout << result;
    return 0;
}
