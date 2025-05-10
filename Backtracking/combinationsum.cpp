#include<bits/stdc++.h>
using namespace std;


 class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int index, vector<int>& res, vector<vector<int>>& finalres) {
        if (target == 0) {
            finalres.push_back(res);
            return;
        }
        if (target < 0 || index >= candidates.size()) {
            return;
        }
        res.push_back(candidates[index]);
        backtrack(candidates, target - candidates[index], index, res, finalres); 
        res.pop_back(); 
        backtrack(candidates, target, index + 1, res, finalres);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalres;
        vector<int> res;
        backtrack(candidates, target, 0, res, finalres);
        return finalres;
    }
};

int main(){
   Solution obj;
   vector<int> v1={2,3,6,7};
   vector<vector<int>> res= obj.combinationSum(v1,7);
  return 0;
}