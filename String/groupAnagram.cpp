#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> res;
      unordered_map<string,vector<string>> mpp;
      for(int i=0;i<strs.size();i++){
        string temp = strs[i];
        sort(temp.begin(),temp.end());
        mpp[temp].push_back(strs[i]);
      }
      for(auto x : mpp){
        res.push_back(x.second);
      }
      return res;
    }
};

int main(){
    Solution s ;
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>res = s.groupAnagrams(strs);
    for(int i=0;i<res.size();i++){
      for(int j=0;j<res[i].size();i++){
        cout<<res[i][j]<<" ";
      }
    }
    return 0;
}