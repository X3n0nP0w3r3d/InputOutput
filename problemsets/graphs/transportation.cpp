#include <bits/stdc++.h>

using namespace std;

vector<string> splitstr(string input_raw, char delimiter){
    vector<string> result;
    string line;
    stringstream input(input_raw);
    while(getline(input, line, delimiter)){
        result.emplace_back(line);
    }
    return result;
}

int main(){
    int pos = 1;
    string input;
    getline(cin, input);
    vector<string> firstline(splitstr(input, ' '));
    int n = stoi(firstline.front());
    int t = stoi(firstline.back());

    getline(cin, input);
    vector<string> portals(splitstr(input, ' '));

    //cout << n << endl;
    //cout << t << endl;
    for(int it=0; it<=portals.size(); it){
        if(pos==t){
            cout << "YES";
            return 0;
        };
        if(pos>t){
            cout << "NO";
            return 0;
        };
        pos += stoi(portals[it]);
        it += stoi(portals[it]);
    }
    cout << "NO";
    return 0;
}