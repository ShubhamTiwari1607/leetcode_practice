#include<bits/stdc++.h>
using namespace std;

string longestPrefix(vector<string> arr){
  sort(arr.begin(),arr.end());
  int i=0;
  string s1 = arr[0];
  string s2 = arr[arr.size()-1];
  for( i=0;i<s1.size();i++){
    if(s1[i]!=s2[i]){
        break;
    }
  }
  return s1.substr(0,i);
}
int main(){
  vector<string> s = {"flower","flow","floating"};
  string res = longestPrefix(s);
  cout<<res;
  return 0;
}