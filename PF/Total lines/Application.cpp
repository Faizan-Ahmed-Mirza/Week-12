#include<iostream>
#include<fstream>
using namespace std ;

main(){
    int count = 0 ;
    string line ;
    fstream file ;
    file.open("file.txt" , ios :: in) ;
    while(!file.eof()){
        getline(file , line) ;
        count ++  ;
    }
    file.close() ;

    cout << "Total number of lines are: " << count ;
}