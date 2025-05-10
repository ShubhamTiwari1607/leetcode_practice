#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            set<char>hashset;
            int maxlen = 0 ;
            int l=0,r=0;
            while(r<s.size()){
                if(hashset.find(s[r])==hashset.end()){
                    hashset.insert(s[r]);
                    if(r-l+1>maxlen){
                        maxlen = r-l+1;
                    }
                    r++;
                }else{
                    hashset.erase(s[l]);
                    l++;
                }
            }
         return maxlen ;
        }
};