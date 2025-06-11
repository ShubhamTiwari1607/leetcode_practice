#include<bits/stdc++.h>
using namespace std ;

void selectionSort(vector<int> &arr){
    int n = arr.size() ;
    for(int i = 0 ; i < n-1 ; i++){
        int j = i , k = i ;
        while(j < n){
            if(arr[j] < arr[k]){
                k = j;
            }
            j++;
        }
        swap(arr[i],arr[k]);
    }
}

int main(){
    vector<int> arr = {4,3,1,2,6,8,7} ;
    selectionSort(arr);
    for(int x : arr)cout<<x<<"\t";
    return 0;
}