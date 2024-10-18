#include <bits/stdc++.h>
#define opt() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main(){
    opt();
    int k,n = 0;
    int winners = 0;
    cin >> n >> k;
    vector<int> scores;
    for(int i=0; i<n; i++){
        int score;
        cin >> score;
        scores.emplace_back(score);
    }
    int passScore = scores[k-1];
    for(auto score : scores){
        if(score >= passScore && score > 0) winners++;
    }
    cout << winners;
    return 0;
}