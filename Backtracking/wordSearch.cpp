// Given an m x n grid of characters board and a string word, return true if word exists in the grid.
// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

#include<bits/stdc++.h>
using namespace std ;

vector<pair<int,int>>directions = {{1,0},{-1,0},{0,1},{0,-1}};

bool find(vector<vector<char>> &grid,string &word,int i ,int j,int m ,int n ,int indx){
  if(indx==word.size()){
    return true ;
  }
  if(i<0 || i>=m || j<0 || j>=n || grid[i][j] ==  '$'){
    return false ;
  }
  if(grid[i][j] != word[indx]){
    return false;
  }

  char temp = grid[i][j];
  grid[i][j] ='$';
  for(pair<int,int> p : directions){
    int i_= i+p.first;
    int j_= j+p.second;
    if(find(grid,word,i_,j_,m,n,indx)){
        return true ;
    }
  }
  grid[i][j]=temp ;
}

bool ifexist(vector<vector<char>> grid,string word){
    int m = grid.size();
    int n = grid[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j] == word[0] && find(grid,word,i,j,m,n,0)){
                 return true;
            }
        }
    }

    return false;
}

