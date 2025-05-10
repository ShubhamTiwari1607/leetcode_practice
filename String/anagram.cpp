//anagram are the string which can be created from one to other
#include<bits/stdc++.h>
using namespace std ;

bool anagram(string s1,string s2){
    if(s1.length()!=s2.length()) return false ; //if they have the diffent length they cannot be anagram
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<s1.length();i++){
        if(s1[i] != s2[i])return false ;
    }
    return true ;
}
int main(){
    string s1 ,s2 ;
    s1 = "eatay" ;
    s2 = "tea" ;
    if(anagram(s1,s2)){
        cout<<"it is a anagram" ;
    }else{
        cout<<"not a anagram " ;
    }
    return 0;
}
