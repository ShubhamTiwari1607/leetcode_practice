#include<bits/stdc++.h>
using namespace std ;

int nonrepeating_element(vector<int> &arr){
    unordered_map<int,int> hash ;
    for(int i=0; i<arr.size(); i++){
        hash[arr[i]] = hash[arr[i]]+1;
    }
    for(int i = 0; i < arr.size(); i++) {
            if(hash[arr[i]] == 1) {
                return arr[i];
            }
    }
    return 0;
}
int main(){
    vector<int> v = {1,2,3,3,4,4,2};
    int nonRepeating = nonrepeating_element(v);
    cout<<"non repeating element :"<<nonRepeating;
    return 0;
}