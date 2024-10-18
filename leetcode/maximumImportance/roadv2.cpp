#include <bits/stdc++.h>

using namespace std;

long long maximumImportance(int n, vector<vector<int>>& roads) {
    long long int totalValue = 0;
    vector<int> connections(n, 0);
    for(vector<int>& edge : roads){
        connections[edge[0]]++;
        connections[edge[1]]++;
    };

    sort(connections.begin(), connections.end());

    int importance = 1;
    for(int count : connections){
        totalValue += (count * importance);
        importance++;
    }
    return totalValue;
}