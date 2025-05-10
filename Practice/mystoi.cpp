#include<bits/stdc++.h>
using namespace std;

int mystoi(string s){
    if(s.size()==0){
        return 0;
    }
    int i=0;
    while(i<s.size() && s[i]==' '){
      i++;
    }
    s = s.substr(i) ;
    int sign = +1;
    if(s[0]=='-'){
        sign = -1;
    }
    int index = (s[0]=='-' || s[0]=='+')?1:0;
    long long res = 0;
    while(i<s.size() && isdigit(s[i])){
            res = res * 10 + (s[i] - '0');
            if (sign == 1 && res * sign > INT_MAX)
                return INT_MAX;
            if (sign == -1 && res * sign < INT_MIN)
                return INT_MIN;
            i++;
    }
    return res;
}

int main(){
string s = "12342abcs";
int res = mystoi(s);
cout<<res;
return 0;
}