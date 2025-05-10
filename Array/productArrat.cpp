//product of array except itself
#include<iostream>
#include<vector>

using namespace std ;

class Solution{
    public:
    vector<int> product(vector<int> nums){
        int n = nums.size() ;
        vector<int> ans(n,1) ;
        int suffix = 1 ;
        for(int i = 1 ;i<n ;i++ ){
            ans[i] = ans[i-1]*nums[i-1];
        }
        for(int i= n-2;i>=0;i--){
            suffix *=nums[i+1] ;
            ans[i] *=suffix;
        }
        return ans;
    }
};

int main(){
    vector<int> v ={1,2,3,4} ;
    Solution s ;
    v = s.product(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}