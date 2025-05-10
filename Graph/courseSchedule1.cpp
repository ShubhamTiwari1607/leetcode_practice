#include<bits/stdc++.h>//if no cycle exists in the graph course can be finished since it is a directed graph uuse kahn algo or dfs 
using namespace std ;

bool canfinish(int numcourses,vector<vector<int>> prerequisites){
    vector<vector<int>> adj(numcourses) ;
    vector<int>indegree(numcourses);
    for(auto x: prerequisites){
        int u = x[1];
        int v= x[0] ;
        adj[u].push_back(v);
        indegree[v]++;
    }
    int count = 0;
    queue<int> que ;
    for(int i=0;i<numcourses;i++){
        if(indegree[i]==0){
          que.push(i);
          count++;
        }
    }
    while (!que.empty())
    {
        int val = que.front();
        que.pop();
        for(auto  x: adj[val]){
            indegree[x]--;
            if(indegree[x]==0){
                que.push(x);
                count++;
            }
        }
    }
    return count==numcourses ;
}

int main(){
    vector<vector<int>> pre = {{1,0}};
    bool res =  canfinish(2,pre);
    cout<<res ;
    return 0;
}