#include<bits/stdc++.h>
using namespace std ;

bool isSubsequence(string s,string t){
    int m = s.size();
    int n = t.size();
    int j=0;
    for(int i=0;i<m;i++){
       if(j<n && s[i]==t[j]){
        j++;
        if(j==n){
            break;
        }
       }
    }
    return j==n ;
}

int main(){
    string s ="ascbadc";
    string t = "abc";
    string res = isSubsequence(s,t)?"Yes":"NO";
    cout<<res ;
    return 0;
}