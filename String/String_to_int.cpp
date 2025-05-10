#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int string_to_int(string s)
    {
        if (s.length() == 0)
            return 0; // if empty string
        int i = 0;
        while (s[i] == ' ' && i < s.length())
        { // removing whitespace
            i++;
        }
        s = s.substr(i);
        int sign = +1;
        if (s[0] == '-')
            sign = -1;
        long int res = 0;
        i = (s[0] == '-' || s[0] == '+') ? 1 : 0;
        while (i < s.size() && isdigit(s[i]))
        {
            if (s[0] == ' ')
                return 0;
            res = res * 10 + (s[i] - '0');
            if (sign == 1 && res * sign > INT_MAX)
                return INT_MAX;
            if (sign == -1 && res * sign < INT_MIN)
                return INT_MIN;
            i++;
        }
        return (int)res * sign;
    }
};

int main()
{
    string s = "   123456abd";
    Solution S;
    int ans = S.string_to_int(s);
    cout << ans;
    return 0;
}