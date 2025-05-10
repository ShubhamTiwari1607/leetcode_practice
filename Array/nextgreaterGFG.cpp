//next greater integer 
// Input: arr[] = [1, 3, 2, 4]
// Output: [3, 4, 4, -1]
#include<bits/stdc++.h>
using namespace std ;

vector<int> nextLargerElement(vector<int>& arr,vector<int>&res) {
    int n = arr.size();
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            res[i] = st.top();
        }
        st.push(arr[i]);
    }
    return res;
}
int main(){
    vector<int> arr = {1,3,2,4};
    vector<int> res(arr.size(),-1);
    nextLargerElement(arr,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0 ;
}