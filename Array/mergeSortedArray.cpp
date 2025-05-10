// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

#include <iostream>
#include<vector>
using namespace std ;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  
        int j = n - 1; 
        int k = m + n - 1;  
        
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main(){
    vector<int> nums1, nums2 ;
    nums1 = {1,2,3,0,0,0} ;
    nums2 = {2,5,6};
    int m = 3 ,n=3 ;
    Solution s;
    s.merge(nums1,m,nums2,n);
    for(int i = 0 ; i<m+n-1 ;i++){
        cout<<nums1[i]<<" ";
    }
    return 0;
}

