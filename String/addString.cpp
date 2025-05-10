#include <bits/stdc++.h>
using namespace std;

string addString(string s1, string s2) {
    int i = s1.size() - 1, j = s2.size() - 1, carry = 0;
    string res = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += s1[i--] - '0';
        if (j >= 0) sum += s2[j--] - '0';

        res.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string s1, s2;
    cout << "Enter two numbers:\n";
    cin >> s1 >> s2;

    cout << "Result: " << addString(s1, s2) << endl;
    return 0;
}
