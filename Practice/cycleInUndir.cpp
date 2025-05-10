#include<bits/stdc++.h>
using namespace std ;

bool iscycledfs(vector<vector<int>> adj,vector<bool>visited,int u,int parent){
  visited[u]=true ;
  for(auto x:adj[u]){
    if(x==parent){
        continue;
    }
    if(visited[x]==true){
        return true ;
    }
    if(iscycledfs(adj,visited,x,u)){
        return true;
    }
  }
  return false ;
}

bool iscycle(vector<vector<int>> adj){
    int n = adj.size();
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==false & iscycledfs(adj,visited,i,-1)){
            return true ;
        }
    }
    return false ;
}

int main(){
    vector<vector<int>> adj ={{1,2},{0,2},{1,0}};
    string res = iscycle(adj)?"Yes":"No" ;
    cout<<res ;
    return 0 ;
}