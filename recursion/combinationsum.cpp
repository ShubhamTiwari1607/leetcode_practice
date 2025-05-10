#include<bits/stdc++.h>
using namespace std ;

void backtrack(vector<int>&candidates,int index,int target,vector<int> &res,vector<vector<int>> &finalres){
    if(target == 0)
    {
        finalres.emplace_back(res);
        return ;
    }
    if(target <0 || index >= candidates.size())
    {
        return ;
    }
    res.push_back(candidates[index]);
    backtrack(candidates,index,target-candidates[index],res,finalres);
    res.pop_back();
    backtrack(candidates,index+1,target,res,finalres);
}
int main(){
    vector<vector<int>> finalres ;
    vector<int>res ;
    vector<int> candidates = {2,3,4,7};
    
    backtrack(candidates,0,7,res,finalres);
    for (const auto& combination : finalres) {
        cout<<"{";
    for (int num : combination) {
        cout << num<<"," ;
    }
     cout<<"} ";
    }
    return 0;
}