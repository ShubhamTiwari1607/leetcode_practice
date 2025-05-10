// [[1,2],[2,3],[3,4],[1,4],[1,5]]
#include<bits/stdc++.h>
using namespace std ;

bool isReachable(vector<vector<int>>& adj, int u, int v, vector<bool>& visited) {
    if (u == v) return true;
    visited[u] = true;
    
    for (int x : adj[u]) {
        if (!visited[x] && isReachable(adj, x, v, visited)) {
            return true;
        }
    }
    return false;
}

vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n = edges.size();
    vector<vector<int>> adj(n + 1);  // Resize to handle 1-based indexing

    for (auto& edge : edges) {
        int u = edge[0], v = edge[1];
        vector<bool> visited(n + 1, false);  // Reset visited for each edge check 
        if (isReachable(adj, u, v, visited)) {
            return {u, v};
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return {};
}


int main(){
    vector<vector<int>> edges = {{1,2},{2,3},{3,4},{1,4},{1,5}};

    vector<int> res = findRedundantConnection(edges);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}