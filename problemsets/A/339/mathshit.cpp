#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    string input;
    vector<int> numbers;
    cin >> input;
    for(int i=0; i<size(input); i+=2){
        int actualVal = input[i] - '0';
        numbers.emplace_back(actualVal);
    }
    sort(numbers.begin(), numbers.end());
    for(int n=0; n<size(numbers); n++){
        if(n!=size(numbers)-1){
            cout << numbers[n] << "+";
        } else {
            cout << numbers[n];
        }
    }

    return 0;
}