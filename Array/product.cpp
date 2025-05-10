#include<iostream>
#include<vector>
using namespace std;

class Solution{
 public:
 vector<int> productExceptItself(vector<int>& nums){
    int n = nums.size();
    vector<int> prefix(n, 1); // initializing an array with same size as the original one
    vector<int> suffix(n, 1);
    vector<int> ans(n, 1);

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    for(int i = 0; i < n; i++){
        ans[i] = suffix[i] * prefix[i];
    }
    return ans;
 }
};

int main(){
    vector<int> v = {1, 2, 3, 4};
    Solution s;
    v = s.productExceptItself(v);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
