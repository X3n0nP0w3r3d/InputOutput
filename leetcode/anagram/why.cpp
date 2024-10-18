#include <bits/stdc++.h>

using namespace std;

int minSteps(string s, string t) {
        unordered_set<char> chars;
        int stepCount = 0;
        for(auto it = s.begin(); it != s.end(); it++){
            chars.insert(*it);
        }
        for(auto it = chars.begin(); it != chars.end(); it++){
            int tcnt = count(s.begin(), s.end(), *it);
            int icnt = count(t.begin(), t.end(), *it);
            if(icnt<=tcnt) stepCount += abs(tcnt - icnt);
        }
        return stepCount;
    }

int main(){
    cout << minSteps("anagramee", "mangaarbb");
    return 0;
}