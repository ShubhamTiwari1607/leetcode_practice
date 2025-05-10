#include<bits/stdc++.h>
using namespace std ;

bool isReachable(vector<vector<int>> &adj , vector<bool>&visited,int u,int v){
  if(u==v){
    return true ;
  }
  visited[u] = true ;
  for(auto v:adj[u]){
    if(visited[v]== false && isReachable(adj,visited,v,v)){
        return true ;
    }
  }
  return false ;
}

vector<int> rendundantcon(vector<vector<int>> &edges){
    vector<vector<int>> adj(edges.size()+1);
    for(vector<int> edge : edges){
        int u = edge[0];
        int v = edge[1];
        vector<bool> visited(edges.size()+1,false);
        if( isReachable(adj,visited,u,v)){
            return {u,v};
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return {};
}
int main(){
    vector<vector<int>> edges = {{1,2},{2,3},{3,4},{1,4},{1,5}};

    vector<int> res = rendundantcon(edges);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}