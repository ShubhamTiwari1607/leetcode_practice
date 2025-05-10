#include<bits/stdc++.h>
using namespace std ;

int main(){
    string first,second ;
    cin>>first>>second ;
    int flag = 0 ;
    for(int i=0;i<first.size();i++){
        char a = tolower(first[i]);
        char b  = tolower(second[i]);
        if(a == b){
            continue ;
        }else if(a<b){
            flag = -1;
            break;
        }else{
            flag = 1;
            break;
        }
    }
    cout<<flag ;
    return 0 ;
}