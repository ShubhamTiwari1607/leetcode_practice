#include<iostream>
using namespace std ;

bool palindrome(string s){
    int l=0;
    int r = s.length()-1;

    while(l<r){
        if(s[l] == s[r]){
            l++;
            r--;
        }else{
            return false;
        }
    }
  return true ;
}

int main(){
    string s;
    cout <<" enter the string\n";
    cin>>s ;
    cout<<"string is palindrome : "<< palindrome(s);
    return 0;
}