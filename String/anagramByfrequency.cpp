#include<bits/stdc++.h>
using namespace std ;

bool anagram(string s1, string s2){
    if(s1.length()!=s2.length()) return false ; //if they have the diffent length they cannot be anagram
    unordered_map<char,int> map1 ;
    for(int i=0 ;i<s1.length();i++){
        map1[s1[i]]++;
        map1[s2[i]]--;
    }
    for(const auto& entry : map1){
        if(entry.second != 0) return false ;
    }
    return true ;
}
int main(){
    string s1 ,s2 ;
    s1 = "tea" ;
    s2 = "eat" ;
    if(anagram(s1,s2)){
        cout<<"it is a anagram" ;
    }else{
        cout<<"not a anagram " ;
    }
    return 0;
}