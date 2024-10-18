#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<vector<int>>adjlist(n);
    // make the adjacency list
    for(vector<int>& node : edges){
        // reverse connections cus its easier
        adjlist[node[1]].emplace_back(node[0]);
    }
    // the above shit was correct (reversing direction to point towards ancestors from a node)
    vector<vector<int>>ancestors_list;
    for(int i=0; i<n; i++){
        vector<int>ancestors;
        unordered_set<int>visited; // created a set for visited nodes for DFS
        dfs(i, adjlist, visited); // do the dfs algo here

        for(int node=0; node<n; node++){
            if(node == i) continue;
            if(visited.find(node)!=visited.end()){
                // add node to ancestors list
                ancestors.emplace_back(node);
            };
            
        }
        // add them to the final list
        ancestors_list.emplace_back(ancestors);
    }
    return ancestors_list;
}

// idk how to do this
void dfs(int node, vector<vector<int>>& adjlist, unordered_set<int>& visited){
    visited.insert(node);

    for(int neighbour : adjlist[node]){
        if(visited.find(neighbour) == visited.end()){
            dfs(neighbour, adjlist, visited);
        }
    }
}


