#include<bits/stdc++.h>
using namespace std ;

void traversal(vector<vector<int>> matric){
    int m = matric.size();
    int n = matric[0].size();
    unordered_map<int,vector<int>> mp ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int diff = i-j ;
            mp[diff].push_back(matric[i][j]);
        }
    }
    for(auto x : mp){
        vector<int> arr = x.second;
        for(int elem :arr){
            cout<<elem<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr = {{3,3,1,1},{2,3,5,1},{2,1,5,4}};
    traversal(arr);
    return 0;
}