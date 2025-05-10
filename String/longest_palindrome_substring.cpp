#include <iostream>
#include <string>
using namespace std;

void expandAround_center(string &s,int l,int r,int &max_len,string &res){
    
    while(l>=0 && r<s.length() && s[l] == s[r]){
        if(r-l+1 > max_len){
            max_len = r-l+1;
            res = s.substr(l,max_len);
        }
        l--;
        r++;
    }
}

string longest_palindrome(string s){
    int max_len = 0;
    string result = "";
    if(s.length() == 1) return s ;
    for(int i=0; i<s.length();i++){
      expandAround_center(s,i,i,max_len,result);
      expandAround_center(s,i,i+1,max_len,result);
    }
    return result ;
}

int main() {
    string s = "cq";
    string result = longest_palindrome(s);
    cout << "The longest palindromic substring is: " << result << endl;
    cout << "The length of the longest palindromic substring is: " << result.length() << endl;
    return 0;
}
