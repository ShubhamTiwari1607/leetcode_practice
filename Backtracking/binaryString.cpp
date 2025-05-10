//generate all the binary string of lenght 3

#include<bits/stdc++.h>
using namespace std ;


void generateString(int n ,vector<string>&res ,string &temp){
    if(temp.size()==n){
        res.push_back(temp);
        return ;
    }
    temp.push_back('0');
    generateString(n,res,temp);
    temp.pop_back();

    temp.push_back('1');
    generateString(n,res,temp);
    temp.pop_back(); 
    
}
// void generateString(char temp[], int n, int index, vector<string>& res) {
//     if (index == n) {
//         res.push_back(string(temp, n));  // Convert char array to string
//         return;
//     }
//     temp[index] = '0';
//     generateString(temp, n, index + 1, res);

//     temp[index] = '1';
//     generateString(temp, n, index + 1, res);
// }
int main(){
    int n =3 ;
    vector<string> res;
    string temp= "";
    generateString(n,res,temp);
    for(string s : res){
        cout<<s<<" ";
    }
    return 0;
}