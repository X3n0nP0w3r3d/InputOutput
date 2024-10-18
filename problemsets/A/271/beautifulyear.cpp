#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int year;
    bool found = false;
    cin >> year;
    while(!found){
        year++;
        unordered_set<int> digits;
        for(int i=0; i<size(to_string(year)); i++){
            digits.emplace(to_string(year)[i]);
        }
        if(digits.size()==4){
            cout << year;
            found = true;
        }
    }
    return 0;
}