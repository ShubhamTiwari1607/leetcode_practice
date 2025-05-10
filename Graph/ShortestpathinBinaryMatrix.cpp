#include<bits/stdc++.h>
using namespace std ;

class Solution {

    public:
        typedef pair<int,pair<int,int>> P ;
    
        vector<pair<int,int>> direction = {{1,1},{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{1,-1},{-1,1}};
        //Main 
        int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
           priority_queue<P,vector<P>,greater<P> > pq;
    
           int m = grid.size() ;
           int n = grid[0].size();
           vector<vector<int>>res(m,vector<int>(n,INT_MAX));
    
           if( grid[0][0]!=0){
            return -1;
           }
           auto isSafe = [&](int x,int y){
             return x>=0 && x<m && y>=0 && y<n ;
           };
           pq.push({0,{0,0}});
           res[0][0] = 0; 
    
           while(!pq.empty()){
            int d = pq.top().first ;
            pair<int,int> node = pq.top().second ;
            int x = node.first;
            int y = node.second;
            pq.pop();
            for(auto dir:direction){
                int x_ = x+dir.first ;
                int y_ = y+dir.second ;
                int wt = 1;
                if(isSafe(x_,y_) && grid[x_][y_]==0 && d+wt<res[x_][y_] ){
                    pq.push({d+wt,{x_,y_}});
                    res[x_][y_]=d+wt;
                } 
            }
           }
           if(res[m-1][n-1]==INT_MAX){
            return -1;
           }
            return res[m-1][n-1]+1 ;
        }
    };