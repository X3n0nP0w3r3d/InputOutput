#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

string shorten(string input){
    opt();
    if(size(input) > 10){
        return input.front() + to_string(size(input) - 2) + input.back();
    }
    return input;
}

int main(){
    opt();
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string input;
        cin >> input;
        cout << shorten(input) << endl;
    }
    return 0;
}