#include<bits/stdc++.h>
using namespace std ;

bool iscycle(vector<vector<int>> adj){
    int n = adj.size();

    vector<int>indegree(n);

    for(int i=0;i<n;i++){
       for(auto x : adj[i]){
        indegree[x]++;
       }
    }
    queue<int> q;
    int count = 0;
    for(int i=0;i<n;i++){
       if(indegree[i]==0){
        q.push(i);
        count++;
       }
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto x:adj[u]){
            indegree[x]--;
           if(indegree[x]==0){
            q.push(x);
            count++;
           }
        }
    }
    return count == n ;
}

int main(){
    vector<vector<int>>adj = {{2},{3},{1}};
    bool res = iscycle(adj);
    cout<<res ;
    return 0 ;
}