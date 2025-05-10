#include<bits/stdc++.h>
using namespace std ;

class Solution {
    private:
    class UnionFind {
        public:
            vector<int> parent; 
            vector<int>Rank ; 
            int count;           
    
            UnionFind(int n) {
                parent.resize(n, -1);  
                Rank.resize(n,0);
                count = n;  
            }
    
            int find(int node) {
                if (parent[node] == -1) {
                    return node;
                }
                return parent[node] = find(parent[node]);
            }
    
            void unionNodes(int n1, int n2) {
                int root1 = find(n1);
                int root2 = find(n2);
    
                if (root1 == root2) {
                    return;  
                }
                count--;
                if(Rank[root1]>Rank[root2]){
                    parent[root2] = root1 ;
               }else if(Rank[root1]<Rank[root2]){
                   parent[root1] = root2;
               }else{
                   parent[root1]= root2;
                   Rank[root2]++;
               }
            }
    };
    
    public:
        int removeStones(vector<vector<int>>& stones) {
            int n = stones.size();
            UnionFind uf(n);
    
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (stones[i][0] == stones[j][0] ||
                        stones[i][1] == stones[j][1]) {
                        uf.unionNodes(i, j);
                    }
                }
            }
    
            return n - uf.count;
        }
};