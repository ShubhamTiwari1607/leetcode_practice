#include<bits/stdc++.h>
using namespace std ;

void heapify(vector<int>&arr ,int n ,int i){
    int largest = i, left = 2*i+1,right = 2*i+2;
    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < n && arr[right] > arr[largest]){
        largest =  right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(vector<int>& arr){
    int n = arr.size() ;
    for(int i = n/2 ; i>=0 ;i--){
        heapify(arr,n,i);
    }
   
    for(int i = n-1 ; i >=0 ; i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}

int main(){
    vector<int> arr = {2,1,4,3,5,7,6,8,9,10} ;
    heapSort(arr) ;
    for(int x :arr){
        cout << x << " ";
    }
    return 0 ;
}