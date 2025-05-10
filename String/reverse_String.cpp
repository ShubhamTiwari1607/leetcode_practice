#include<iostream>
using namespace std ;

string reverse(string s){
    int i = s.length()-1 ;
    string res = " ";
    while(i>=0){
        string reverseWord = "";
        while(i>=0 && s[i] != ' '){
            reverseWord +=s[i];
            i--;
        }
        res= res+" "+reverseWord;
        i--;
    }
    return res.substr(1);
}

int main(){
    string s = "My name is Shubham";
    cout<<"the reverse string is :"<<reverse(s);
    return 0;
}