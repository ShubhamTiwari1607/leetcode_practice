#include<bits/stdc++.h>
using namespace std ;

class Solution {
    private:
        unordered_map<char , vector<char>> mp = {
            {'2', {'a', 'b', 'c'}},
            {'3', {'d', 'e', 'f'}},
            {'4', {'g', 'h', 'i'}},
            {'5', {'j', 'k', 'l'}},
            {'6', {'m', 'n', 'o'}},
            {'7', {'p', 'q', 'r', 's'}},
            {'8', {'t', 'u', 'v'}},
            {'9', {'w', 'x', 'y', 'z'}}
        };
    
    public:
        void generateLetters(string &digits, int index, string &temp, vector<string> &res) {
            if(index == digits.size()){
                res.push_back(temp);
                return ;
            }
            char c = digits[index];
            for(char n : mp[c]){
                temp.push_back(n);
                generateLetters(digits,index+1,temp,res);
                temp.pop_back();
            }
        }
    
        vector<string> letterCombinations(string digits) {
            if (digits.empty()) return {};  
            string temp = "";
            vector<string> res;
            generateLetters(digits, 0, temp, res);
            return res;
        }
    };
    