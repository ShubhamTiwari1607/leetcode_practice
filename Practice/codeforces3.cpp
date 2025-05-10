#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n , k ;
    cin >> n >> k ;
    
    vector<int> arr(n) ;
    
    for(int i =0 ;i<n;i++){
        
        cin>>arr[i];
        
    }
    int l= 0, r = arr.size()-1,res =0 ;
    
    while(l<=r){
        int  mid = l + (r-l)/2 ;
        if(arr[mid] >= arr[k]){
            res = mid ;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    res = res==0?0:res+1;
   
    cout<<res ;

    return 0;
}