#include<bits/stdc++.h>
using namespace std;
//we need to create the adjacency list 
//{[1,2],[1,3],[3,4],[0,1]} this represent  the edges between the vertices of grph

void createadjacancyList(unordered_map< int,vector<int>> &list,vector<vector<int>>graph){
   for(vector<int> &vec : graph){
    int v = vec[1];
    int u = vec[0];
    list[u].push_back(v);
   }
}

int main(){
unordered_map< int,vector<int>> list;
vector<vector<int>>graph;
return 0;
}