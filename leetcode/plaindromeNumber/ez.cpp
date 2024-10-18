#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

bool isPalindrome(int &x){
    opt();
    long int result = 0;
    int orig = x;
    while(x > 0){
        result = (result * 10) + x % 10;
        x = x / 10;
    }
    if(result == orig) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    cout << isPalindrome(n);
    return 0;
}