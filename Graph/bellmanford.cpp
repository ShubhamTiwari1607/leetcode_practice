#include<bits/stdc++.h>
using namespace  std ;

vector<int> bellmanford(vector<vector<int>> edges,int v){
  vector<int>res(v,INT16_MAX);
  res[0] = 0 ;
  for(int i=0;i<v-1;i++){
    for(auto edge : edges){
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        if(res[u]!=INT16_MAX && u+wt<res[v]){
            res[v] = res[u]+wt;
        }
    }
  }
  //detect negative cycle
  for(auto edge : edges){
    int u = edge[0];
    int v = edge[1];
    int wt = edge[2];
    if(res[u]!=INT16_MAX && u+wt<res[v]){
        return {-1};
    }
}
  return res ;
}

int main(){
    vector<vector<int>> edges = {{0,1,3},{1,4,4},{2,0,1},{0,3,9},{1,2,-5},{2,3,6}};
    vector<int> res = bellmanford(edges,5);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0 ;
}