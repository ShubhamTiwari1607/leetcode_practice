#include <iostream>
using namespace std;

int lenght(string s)
{

    int i = s.length() - 1;
    int count = 0;
    while (i >= 0 && s[i] == ' ')
    {
        i--;
    }
    while (i >= 0 && s[i] != ' ')
    {
        count++;
        i--;
    }
    return count;
}

int main(){
    string s ="Shubham is my name and the result is ";
    cout <<" the lenght of the last word is "<<lenght(s);
    return 0;
}