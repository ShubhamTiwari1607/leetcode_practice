//using dfs
#include<bits/stdc++.h>
using namespace std ;

void dfs(vector<vector<int>> adj, vector<bool>&visited,int node,stack<int> &st){
    visited[node] = true ;
    for(auto x:adj[node]){
        if(visited[x]==false){
            dfs(adj,visited,x,st);
        }
    }
    st.push(node);
}
void topoSort(vector<vector<int>> adj){
  vector<bool>visited(adj.size(),false);
  stack<int> st;
  for(int i=0;i<adj.size();i++){
    if(visited[i]==false){
        dfs(adj,visited,i,st);
    }
  }
  while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
  }
}

int main(){
    vector<vector<int>> adj ={{2,3},{4},{3,1},{1},{},{1,4}};
    topoSort(adj);
    return 0;
}