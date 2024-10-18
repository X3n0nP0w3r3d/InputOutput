#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

// 32 max characters length, ALL lowercase latin letters (cannot have numbers!)

int main(){
    opt();
    int n;
    cin >> n;
    unordered_map<string, int> names;
    for(int i = 0 ; i<n; i++){
        string name;
        cin >> name;
        int collision = names[name];
        names[name]++;
        collision == 0 ? cout << "OK\n" : cout << name << collision << "\n";
    }
    return 0;
}