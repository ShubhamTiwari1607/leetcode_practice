#include<bits/stdc++.h>
using namespace std ;

int firstRepeatingelement(vector<int> &arr){
    set<int> hashset;
    int min = -1;
    for(int i=arr.size()-1;i>=0;i--){
        if(hashset.find(arr[i]) != hashset.end()){
            min = i;
        }else{
            hashset.insert(arr[i]);
        }
    }
    return min!=-1?min:-1;
}
int main(){
    vector<int> arr = {1,2,3,4,3,2};
    int index = firstRepeatingelement(arr);
    cout<<"the first repeating element is :"<<arr[index];
    return 0;
}