#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<string>& res, int oc, int cc, int n, string s) {
    if (oc == n && cc == n) {
        res.push_back(s);
        return;
    }

    if (oc < n) {
        backtrack(res, oc + 1, cc, n, s + '(');
    }

    if (cc < oc) {
        backtrack(res, oc, cc + 1, n, s + ')');
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    backtrack(res, 0, 0, n, "");
    return res;
}

int main() {
    int target = 3; 
    vector<string> res = generateParenthesis(target);

    
    for (const string& s : res) {
        cout << s << ",";
    }

    return 0;
}
