#include<bits/stdc++.h>
using namespace std ;


class UnionFind {
    public:
        vector<int> parent; 
        vector<int>Rank ; 
        int count;           

        UnionFind(int n) {  //n is the number of nodes
            parent.resize(n, -1);  
            Rank.resize(n,0);
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

int main(){
    // parent.resize(26);
    // Rank.resize(26);
}