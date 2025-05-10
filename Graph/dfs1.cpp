#include<bits/stdc++.h>
using namespace std ;

void dfs(vector<vector<int>> &adjM,vector<bool> &visited,int u){
  visited[u] = true ;
  cout<<u<<" ";
  for(int v = 0 ;v<adjM.size();v++){
    if(visited[v] == false && adjM[u][v]==1){
        dfs(adjM,visited,v);
    }
  }
}

int main(){
     vector<vector<int>> adjM = { {0, 1, 1, 0}, {1, 0, 1, 1}, {1, 1, 0, 1},{0, 1, 1, 0}};
     vector<bool> visited(adjM.size(),false);
     for(int i=0;i<adjM.size();i++){
       if(visited[i]==false){
        dfs(adjM,visited,i);
       }
     }
     return 0;
}