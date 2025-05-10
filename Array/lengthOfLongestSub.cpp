//Program to find the length of longest substring without repeatetion

#include <iostream>
#include<set>
#include<string>
using namespace std ;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int max = 0 ,left = 0 ,right = 0  ;
       set<char> Set ;
       while(right < s.size()){   
          if(Set.find(s[right])== Set.end()){
            if((right-left+1) > max){
                max = right-left+1 ;
            }
            Set.insert(s[right]) ;
            right++ ;
          }else{
            Set.erase(s[left]);
            left++ ;
          }
       }
    return max;}
};
int main(){

    Solution S ;
    string  s = "abcabcbb" ;
    int lenght = S.lengthOfLongestSubstring(s) ;
    cout<<"the length of the longest substring is : "<<lenght ;
    return 0 ;
}