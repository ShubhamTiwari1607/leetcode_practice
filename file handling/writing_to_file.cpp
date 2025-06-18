#include<fstream>
#include<iostream>
using namespace std ;

int main(){
    ofstream outfile("example.txt");
    if(outfile.is_open()){
        outfile <<"this is a file handling class\n";
        outfile.close();
    }else{
        cout << "can't open the file ";
    }
    return 0;
}