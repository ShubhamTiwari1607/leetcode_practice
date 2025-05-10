#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s; 

    int hh = stoi(s.substr(0, 2)); 
    string suffix;

    if (hh == 0) {
        hh = 12;
        suffix = " AM";
    } else if (hh == 12) {
        suffix = " PM";
    } else if (hh < 12) {
        suffix = " AM";
    } else {
        hh = hh % 12; 
        suffix = " PM";
    }

    
    string res = (hh < 10 ? "0" : "") + to_string(hh) + s.substr(2) + suffix;

    cout << res << endl;
    return 0;
}

