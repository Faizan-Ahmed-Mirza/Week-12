#include<iostream>
#include<fstream>
using namespace std ;

main(){
    string line ;
    fstream file ;
    file.open("file.txt" , ios :: in) ;
    getline(file , line) ;
    file.close() ;

    cout << line ;

}