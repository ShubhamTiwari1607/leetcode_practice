#include<bits/stdc++.h>
using namespace std;
//anagram are two string which can be created from one another like the tea and ate
bool validAnagram(string s1, string s2){
  if(s1.size()!=s2.size()){
    return false ;
  }
  unordered_map<char,int> freq;
  for(auto x:s1){
    freq[x]++;
  }

  for(int i=0;i<s2.size();i++){
    if(freq.find(s2[i])!=freq.end()){
        freq[s2[i]]--;
    }
  }
  for(auto x:freq){
    if(x.second!=0)return false ;
  }
  return true ;
}

int main(){
 string s1 = "tea";
 string s2 = "bat";
 if(validAnagram(s1,s2)){
    cout<<"the given string are valid anagram";
 }else{
    cout<<"not the valid anagram ";
 }
 return 0;
}