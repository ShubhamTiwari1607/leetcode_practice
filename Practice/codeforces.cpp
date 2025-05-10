#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n;
    vector<string> s(n) ;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    unordered_map<string,int> hashset;
    for(int i=0;i<n;i++){
       if(hashset.find(s[i])!=hashset.end()){
         cout<<s[i]+to_string(hashset[s[i]])<<endl;
         hashset[s[i]]++;
       }else{
         hashset[s[i]]++;
         cout<<"OK"<<endl;
       }
    }
    return 0;
}