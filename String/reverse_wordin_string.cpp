// Input: s = "the sky is blue"
// Output: "blue is sky the"

#include<iostream>
#include<algorithm>
using namespace std ;

string reverse(string s){
    int n = s.length()-1;
    string res = "";
    reverse(s.begin(),s.end());
    int i=0;
    while(i<=n){
        string reverseW = "";
        while(i<=n && s[i]!=' '){
            reverseW += s[i] ;
            i++ ;
        }
        reverse(reverseW.begin(),reverseW.end());
        res = res+" "+reverseW;
        i++;
    }
 return res.substr(1);
}


int main(){
    string s = "the sky is blue ";
    cout << "the input string is : "<<s<<endl;
    cout<<"the output string is : "<<reverse(s);
    return 0;
}