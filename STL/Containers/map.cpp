#include<bits/stdc++.h>
using namespace std ;

string month_name(int month){
    map<int,string> cal;
    cal[1] = "January";
    cal[2] = "Febuary";
    cal[3] = "March";
    cal[4] = "April";
    cal[5] = "May";
    cal[6] = "June";
    cal[7] = "July";
    cal[8] = "August";
    cal[9] = "September";
    cal[10] = "October";
    cal[11] = "November";
    cal[12] = "December";

    return cal[month];
}

int main(){

    int month ;
    int cont = 1 ;
    do{
    cout<<"enter the name of the month you want to know the name : ";
    cin>> month ;
    string monthname = month_name(month);
    cout<<"the month  name is : "<<monthname<<endl ;
    try{
        cout<<"do you want to continue ? \n If 'yes' enter 1 else 0"<<endl;
        cin>>cont ;
        if(cont!=1 && cont!=0){
            throw ;
        }
        
    }catch(exception e){
       cout<<"enter a valid number" ;
       break ;
    }
    }while (cont == 1 );
    

    return 0 ;

}