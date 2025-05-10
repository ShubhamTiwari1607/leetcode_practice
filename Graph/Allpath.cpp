#include<bits/stdc++.h>
using namespace std ;


class Solution {
    public://remmeber backtracking
    
        void dfs(vector<vector<int>>&graph,vector<vector<int>>&res,vector<int>&inter,int u){
           inter.push_back(u);
           if(u==graph.size()-1){ //means last node
            res.push_back(inter);
           }else{
                for(auto v : graph[u]){
                    dfs(graph,res,inter,v);
                }
           }
           inter.pop_back();
        }
    
        vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
            int n = graph.size();
            vector<vector<int>>res;
            vector<int> inter;
    
            dfs(graph,res,inter,0);
            return res ;
        }
    };