//using BFS kahn algorithm
#include<bits/stdc++.h>
using namespace std ;

void topoSort(vector<vector<int>> adj,vector<int>&res){
    int V = adj.size();
    vector<int>indegree(V);
    //Step 1 meausre the indegree of all nodes 
    for(int i=0;i<V;i++){
        for(int &v: adj[i]){
            indegree[v]++;
        }
    }
    //step 2 if the indegree of any node is zero then push it in the queue
    queue<int> q ;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    //step 3 BFS
    while(!q.empty()){
        int u = q.front();
        res.push_back(u);
        q.pop();
        for(auto x : adj[u]){
            indegree[x]--;
            if(indegree[x]==0){
                q.push(x);
            }
        }
    }

}
int main(){
    vector<vector<int>> adj ={{2,3},{4},{3,1},{1},{},{1,4}};
    vector<int>res;
    topoSort(adj,res);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}