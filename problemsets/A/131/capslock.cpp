#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    cin >> input;
    bool caps = true;
    for(int i = 1; i<size(input); i++){
        if(input[i] > 'Z'){
            caps = false;
        }
    }
    if(input[0] > 'Z' && caps){
        transform(input.begin()+1, input.end(), input.begin()+1, ::tolower);
        transform(input.begin(), input.begin()+1, input.begin(), ::toupper);
    } else if(input[0] <= 'Z' && caps){
        transform(input.begin(), input.end(), input.begin(), ::tolower);
    }
    cout << input;
    return 0;
}