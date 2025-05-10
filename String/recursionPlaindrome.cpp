#include<iostream>
using namespace std ;

bool palindrome(string s,int l,int r){
    if(l>=r){
        return true ;
    }
    if(l<r){
      if(s[l] == s[r]){
        return palindrome(s,l+1,r-1);
      }  
    }
    return false;
}
int main(){
    string s;
    cout <<" enter the string\n";
    cin>>s ;
    cout<<"string is palindrome : "<< palindrome(s,0,s.length()-1);
    return 0;
}