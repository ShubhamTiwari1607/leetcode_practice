//detecting cycle in the directed graph using the bfs(kahn algorithm)
#include<bits/stdc++.h>
using namespace std ;

bool iscycle(vector<vector<int>> adj,int V){
   queue<int> q ;
   vector<int>indegree(V);
   int count=0;
   for(int i=0;i<V;i++){
    for(auto x:adj[i]){
        indegree[x]++;
    }
   }
   for(int i=0;i<V;i++){
    if(indegree[i]==0){
        q.push(i);
        count++;
    }
   }
   while (!q.empty())
   {
    int val = q.front();
    q.pop();
    for(auto x:adj[val]){
        indegree[x]--;
        if(indegree[x]==0){
            q.push(x);
            count++;
        }
    }
   }
   if(count==V){
    return false ;
   }
   return true ;
   
}
int main(){
    vector<vector<int>> adj ={{2,3},{4},{3,1},{1},{},{1,4}};
    bool cycle = iscycle(adj,adj.size());
    cout<<cycle ;
    return 0;
}