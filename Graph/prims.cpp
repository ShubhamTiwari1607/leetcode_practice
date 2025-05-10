#include<bits/stdc++.h>
using namespace std ;


typedef pair<int, int> P;
// Function to find sum of weights of edges of the Minimum Spanning Tree.
int spanningTree(int V, vector<vector<int>> adj[]){
    // code here
    priority_queue<P, vector<P>, greater<P>> pq;
    vector<bool> inMST(V, false);
    pq.push({0, 0});
    int sum = 0;
    
    while (!pq.empty()) {
        pair<int, int> p = pq.top();
        pq.pop();
        int node = p.second, wt = p.first;
        
        if (inMST[node] == true) {
            continue;
        }
        
        inMST[node] = true;
        sum += wt;
        
        for (auto &edge : adj[node]) {
            int Nnode = edge[0];
            int Nnode_wt = edge[1];
            if (inMST[Nnode] == false) {
                pq.push({Nnode_wt, Nnode});
            }
        }
    }
    return sum;
}

