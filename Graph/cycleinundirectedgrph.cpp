#include<bits/stdc++.h>
using namespace std ;

class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool iscycledfs(vector<vector<int>>& adj,vector<bool>&visited,int u,int parent){
        visited[u] =true ;
        for(auto v:adj[u]){
            if(v == parent)continue ;
            if(visited[v] == true ){ //there is cycle 
                return true ;
            }
            if(iscycledfs(adj,visited,v,u)){
                return true ;
            }
        }
        return false ;
    }
    bool isCycle(vector<vector<int>>& adj) {
        
        vector<bool>visited(adj.size(),false);
        for(int i=0;i<adj.size();i++){
            if(visited[i] == false  && iscycledfs(adj,visited,i,-1)){
                return true ;
            }
        }
        return false ;
        
    }
};

int main(){
    vector<vector<int>> adj = {{1, 2}, {0, 2}, {0, 1, 3, 4}, {2}, {2}};
    vector<bool>visited(adj.size(),false);
    Solution obj;
    bool res = obj.isCycle(adj);
    cout<<res ;
    return 0 ;
}