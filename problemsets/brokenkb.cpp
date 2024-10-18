#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> inputv;
    string input;
    string s;
    cin >> input;
    stringstream ss(input);
    while(getline(ss, s, ' ')){
        inputv.emplace_back(s);
    };

    
    return 0;
}