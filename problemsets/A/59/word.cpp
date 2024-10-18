#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);

using namespace std;

int main(){
    // lowercase if equal caps and lowercase
    opt();
    string input;
    int lower,upper = 0;
    cin >> input;
    //cout << int('a') << endl << int ('z') << endl << int('A') << endl << int('Z');
    for(auto character : input){
        if(int(character) >= 97 && int(character) <= 122){
            lower++;
        } else {
            upper++;
        }
    }
    if(upper > lower){
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    } else{
        transform(input.begin(), input.end(), input.begin(), ::tolower);
    }
    cout << input;
    return 0;
}