#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main(){
    opt();
    string original;
    string translation;
    cin >> original >> translation;
    if(size(original) != size(translation)){cout << "NO"; return 0;};
    for(int i=0; i<size(original); i++){
        if(original[i] != translation[size(original)-1-i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}