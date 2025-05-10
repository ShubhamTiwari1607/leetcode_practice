#include<bits/stdc++.h>
using namespace std;

void stringSet(string str,vector<string> &res){
    string s=" ";
    for(int i=0;i<=str.size();i++){
        if(str[i]==' '|| i>str.size()-1){
            
            res.push_back(s);
            s = " ";
        }
        s+=str[i];
    }
}
int main(){
    vector<string> res;
    string s ="dog cat cat fish";
    stringSet(s,res);
    for(auto x: res){
        cout<<x<<" ";
    }
    return 0;
}