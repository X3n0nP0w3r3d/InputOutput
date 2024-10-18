#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int luckydigits=0;
    string input;
    cin >> input;
    bool unlucky = false;
    for(auto i : input){
        if(i == '7' || i == '4'){
           luckydigits++;
        }
    }
    for(auto i : to_string(luckydigits)){
        if(i != '7' && i != '4'){
           cout << "NO";
           return 0;
        }
    }
    cout << "YES";
    return 0;
}