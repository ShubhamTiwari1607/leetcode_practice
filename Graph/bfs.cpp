#include<bits/stdc++.h>
using namespace std;

void bfs( vector<vector<int>> adj){
  int n = adj.size();
  vector<bool>visited(n,false);
  queue<int> q;
  q.push(0);
  visited[0] = true ;
  while(!q.empty()){
    int val = q.front();
    q.pop() ;
    cout<<val<<" ";
    for(int x:adj[val]){
        if(visited[x]==false){
           q.push(x);
           visited[x] = true ;
        }
    }
  }
}

int main(){
//adj list can be represented by using unordered map or using vector array or vector of vector here individual entry show that edges exist between the two vwrtices 

  vector<vector<int>> adj = {{1, 2}, {0, 2}, {0, 1, 3, 4}, {2}, {2}};
  bfs(adj);
  return 0;
}