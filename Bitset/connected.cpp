#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
        class UnionFind {
        public:
            vector<int> parent, Rank;
    
            UnionFind(int n) {
                parent.resize(n);
                Rank.resize(n, 0);
                for (int i = 0; i < n; i++) parent[i] = i;  
            }
    
            int find(int node) {
                if (parent[node] != node) parent[node] = find(parent[node]);  
                return parent[node];
            }
    
            void unionNodes(int n1, int n2) {
                int root1 = find(n1);
                int root2 = find(n2);
    
                if (root1 != root2) {  
                    if (Rank[root1] > Rank[root2]) {
                        parent[root2] = root1;
                    } else if (Rank[root1] < Rank[root2]) {
                        parent[root1] = root2;
                    } else {
                        parent[root1] = root2;
                        Rank[root2]++;
                    }
                }
            }
        };
    
        int intersect(const vector<int>& a, const vector<int>& b) {
            bitset<1001> bitsetA;  
            
            for (int num : a) bitsetA.set(num);  // Set bits for elements in `a`
            
            bitset<1001> bitsetB;  
            for (int num : b) bitsetB.set(num);  // Set bits for elements in `b`
            
            return (bitsetA & bitsetB).count();  // Count number of common elements
        }
    
        int numberOfComponents(vector<vector<int>>& properties, int k) {
            int n = properties.size();
            UnionFind dsu(n);
    
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (intersect(properties[i], properties[j]) >= k) {
                        dsu.unionNodes(i, j);
                    }
                }
            }
    
            unordered_set<int> unique_parents;
            for (int i = 0; i < n; i++) {
                unique_parents.insert(dsu.find(i));
            }
            return unique_parents.size();
        }
    };