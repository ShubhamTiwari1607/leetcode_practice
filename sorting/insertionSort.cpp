#include<bits/stdc++.h>
using namespace std;

void insertion_Sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 1; i < n ; i++){
       int j = i-1, x = arr[i];
       while( j>=0 && arr[j]>x){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1] = x;
    }
}
int main(){
    vector<int> arr = {2,1,4,3,5,7,6,8,9,10} ;
    insertion_Sort(arr) ;
    for(int x :arr){
        cout << x << " ";
    }
    return 0 ;
}