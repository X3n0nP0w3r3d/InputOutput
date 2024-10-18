#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main(){
    opt();
    string text;
    cin >> text;
    text.front() = toupper(text.front());
    cout << text;
    return 0;
}