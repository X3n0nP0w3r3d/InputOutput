#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    string input;
    int n;
    int a=0;
    int d=0;
    cin >> n;
    cin >> input;
    for(int i=0; i<n; i++){
        if(input[i]=='A'){
            a++;
        } else {
            d++;
        }
    }
    if(a > d){
        cout << "Anton";
    } else if(d > a){
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
    return 0;
}
