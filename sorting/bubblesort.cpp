#include<bits/stdc++.h>
using namespace std ;

void bubbleSort(vector<int> &arr){
    int n = arr.size() ;
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int> arr = {4,3,1,2,6,8,7} ;
    bubbleSort(arr);
    for(int x : arr)cout<<x<<"\t";
    return 0;
}