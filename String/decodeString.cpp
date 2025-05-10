// Input: s = "3[a]2[bc]"
// Output: "aaabcbc"

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        string decodeString(string s) {
            int n = s.size();
            stack<int> numst;
            stack<string> chst;
    
            for (int i = 0; i < n; i++) {
                if (s[i] != ']') {
                    if (isdigit(s[i])) {
                        int num = 0;
                        while (i < n && isdigit(s[i])) {
                            num = num * 10 + (s[i] - '0');
                            i++;
                        }
                        i--;
                        numst.push(num);
                    } else {
                        chst.push(string(1, s[i]));
                    }
                } else {
                    string temp = "";
                    while (chst.top() != "[") {
                        temp = chst.top() + temp; 
                        chst.pop();
                    }
                    chst.pop(); 
    
                    int rep = numst.top();
                    numst.pop();
    
                    string res = "";
                    for (int j = 0; j < rep; j++) {
                        res += temp; 
                    }
                    chst.push(res); 
                }
            }
    
            string res = "";
            while (!chst.empty()) {
                res = chst.top() + res; 
                chst.pop();
            }
    
            return res;
        }
    };