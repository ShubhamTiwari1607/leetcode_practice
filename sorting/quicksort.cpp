#include<bits/stdc++.h>
using namespace std ;

int partition(vector<int> &arr,int l,int h){
    int pivot = arr[h];
    int i = l-1,j=l;
    while(j <= h-1){
     if(arr[j] < pivot){
        i++;
        swap(arr[i],arr[j]);
     }
     j++;
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void quicksort(vector<int>&arr,int low,int high){
    if(low < high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quicksort(arr, 0, n - 1);
  
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}