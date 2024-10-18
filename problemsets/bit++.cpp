#include <bits/stdc++.h>
using namespace std;
int main(){
    int X_VALUE = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string operation;
        cin >> operation;
        if(operation[1] == '+') X_VALUE++;
        else X_VALUE--;
    }
    cout << X_VALUE;
    return  0;
}