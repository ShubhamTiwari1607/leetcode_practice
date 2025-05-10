#include <bits/stdc++.h>
using namespace std;

int main()
{

    auto comp = [](string &s1, string &s2)
    {
        if (s1 + s2 > s2 + s1)
        {
            return true;
        }
        return false;
        
    };

    vector<string> v = {"9", "30", "3", "4", "23"};
    sort(begin(v), end(v), comp);
    string res = "";
    for (auto str : v)
    {
        res += str;
    }

    cout << res;
    return 0;
}