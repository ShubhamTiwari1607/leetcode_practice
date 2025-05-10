#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
    priority_queue<P, vector<P>, greater<P>> pq;
    vector<int> res(adj.size(), INT_MAX); // Distance array

    pq.push({0, src}); 
    res[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        for (auto v : adj[u]) {
            int desti = v.first;
            int wt = v.second;

            if (wt + d < res[desti]) {
                pq.push({wt + d, desti});
                res[desti] = wt + d;
            }
        }
    }
    return res; 
}

// Driver Code
int main() {
    int V, E, src;
    cin >> V >> E >> src;
    
    vector<vector<pair<int, int>>> adj(V);
    
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }

    vector<int> distances = dijkstra(adj, src);
    
   
    for (int i = 0; i < V; i++) {
        cout << "Distance from " << src << " to " << i << " = " 
             << (distances[i] == INT_MAX ? -1 : distances[i]) << endl;
    }

    return 0;
}
