#include <bits/stdc++.h>

using namespace std;

long long int calcfunc(long long int n){
    long long int result;
    if(n%2==1){
        result = ((n+1)/2)*(-1);
    } else {
        result = (n/2);
    };
    return result;
};

int main(){
    long long int n;
    cin >> n;
    cout << calcfunc(n);
    return 0;
};