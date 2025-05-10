//remove element and all the instance of the element from the array 
#include<iostream>
#include<vector>

using namespace std ;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0 ,k=0 ;
        while(l <nums.size()){
           if(nums[l]!=val){
            nums[k++] = nums[l] ;
           }
           l++;
        }
        return k ;
    }
};

int main(){
    int lenght ;
    Solution s ;
    vector<int>nums = {3,2,2,3} ;
    lenght = s.removeElement(nums,3);
    cout<< lenght ;
    return 0 ;
}