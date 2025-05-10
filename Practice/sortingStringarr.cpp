#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<string>> res ;
    unordered_map<string,vector<string>> mpp;
    vector<string>arr={"ate","tea","bat","tab"};
    for(int i=0;i<arr.size();i++){
       string temp = arr[i];
       sort(temp.begin(),temp.end());
       mpp[temp].push_back(arr[i]);
    }
    for(auto x:mpp){
       res.push_back(x.second);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}