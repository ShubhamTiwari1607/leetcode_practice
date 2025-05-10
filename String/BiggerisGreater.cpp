/*Lexicographical order is often known as alphabetical order when dealing with strings. A string is greater than another string if it comes later in a lexicographically sorted list.

Given a word, create a new word by swapping some or all of its characters. This new word must meet two criteria:
It must be greater than the original word
It must be the smallest word that meets the first condition
Example
w=abcd;
The next largest word is w = abdc ;*/
#include<bits/stdc++.h>
using namespace std;
string BiggerisGreater(string w){
    int n=w.size();
    int i=n-2;
    int k=-1;
    //find the first  index where w[i]<w[i+1]
    while(i>=0){
        if(w[i]<w[i+1]){
            k=i;
            break;
        }
    }
    if(k==-1){
        return "No answer";
    }
    i = n-1;
    int l=0;
    while(i>k){
        if(w[i]>w[k]){
           l=i;
           break;
        }
        i--;
    }
    swap(w[l],w[k]);
    sort(w.begin()+k+1,w.end());
    return w;
}
int main(){
    string w = "abcd";
    string res= BiggerisGreater(w);
    cout<<res ;
    return 0;
}