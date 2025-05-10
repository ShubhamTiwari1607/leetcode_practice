#include<bits/stdc++.h>
using namespace std ;

void dfs(vector<vector<int>> &adj,vector<bool>&visited,int node){
 if(visited[node] == true){
    return ;
 }
 cout<<node<<" ";
 visited[node] = true ;
 for(auto &x : adj[node]){
    if(visited[x]==false){
        dfs(adj,visited,x);
    }
 }
}
int main(){
    
//adj list can be represented by using unordered map or using vector array or vector of vector
  vector<vector<int>> adj = {{1, 2}, {0, 2}, {0, 1, 3, 4}, {2}, {2}};
  vector<bool>visited(adj.size(),false);
  dfs(adj,visited,0);
  return 0;

}