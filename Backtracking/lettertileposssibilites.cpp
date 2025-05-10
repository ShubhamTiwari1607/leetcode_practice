// You have n  tiles, where each tile has one letter tiles[i] printed on it.

// Return the number of possible non-empty sequences of letters you can make using the letters printed on those tiles.

// Example 1:

// Input: tiles = "AAB"
// Output: 8
// Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".

#include<bits/stdc++.h>
using namespace std ;

class Solution {
    public:
    
       void solve(string&tiles,string&curr,unordered_set<string>&res,vector<bool>&used,int n)
        {
            res.insert(curr);
            for(int i=0;i<n;i++){
                if(used[i]==true){
                    continue;
                }
                used[i]=true ;
                curr.push_back(tiles[i]);
                solve(tiles,curr,res,used,n);
                used[i]=false ;
                curr.pop_back();
            }
        }
        int numTilePossibilities(string tiles) {
            int n = tiles.size();
    
            vector<bool>used(n,false);
            unordered_set<string>res ;
    
            string curr = "";
    
            solve(tiles,curr,res,used,n);
            return res.size()-1;
        }
    };