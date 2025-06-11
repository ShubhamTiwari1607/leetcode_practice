#include<bits/stdc++.h>
using namespace std ;

vector<int> merge(const vector<int> &arr1 , const vector<int> &arr2){
   int m = arr1.size() , n = arr2.size() , x = 0 , y = 0 ;
   vector<int> res ;
   while(x < m && y < n){
      arr1[x]<arr2[y]?res.push_back(arr1[x++]):res.push_back(arr2[y++]);
   }
   while(x<m){
    res.push_back(arr1[x++]);
   }
   while(y<n){
    res.push_back(arr2[y++]);
   }
   return res ;
}

int main(){
    vector<int> arr1 ={ 1,3,5,8,9};
    vector<int> arr2 ={2,4,6,8,10} ;

    vector<int> res = merge(arr1,arr2) ;

    for(int x : res){
        cout << x << " ";
    }
    return 0 ;

}