#include<bits/stdc++.h>
using namespace std ;

string timeformat(string &s) {
    int hour = stoi(s.substr(0, 2));  // Extract the hour part as an integer
    string period = s.substr(s.size() - 2);  // Extract the AM/PM part
    string rest = s.substr(2, s.size() - 4);  // Extract the ":min:sec" part

    if (period == "PM" && hour != 12) {
        hour += 12;  // Convert PM to 24-hour format
    } else if (period == "AM" && hour == 12) {
        hour = 0;  
    }
    string hourStr = (hour < 10 ? "0" : "") + to_string(hour);

    return hourStr + rest;  // Combine the hour with the rest of the time
}


int main(){
    string s ;
    cout<<"enter the time"<<endl;
    getline(cin , s);
    s = timeformat(s);
    cout<<s ;
    return 0;
}