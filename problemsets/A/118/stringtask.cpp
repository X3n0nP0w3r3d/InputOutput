#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    vector<char> charArray({'a', 'e', 'i', 'o', 'u', 'y'});
    string input;
    cin >> input;
    for(int i=0; i<size(input); i++){
        auto it = find(charArray.begin(), charArray.end(), char(tolower(input[i])));
        if(it != charArray.end()){
            input.erase(input.begin()+i);
            i--; // ACCOUNT FOR DELETING AND REDUCING VECTOR SIZE
        }
    }
    for(auto character : input){
        cout << "." << char(tolower(character));
    }
    return 0;
}