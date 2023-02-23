#include<iostream>
#include<fstream>
using namespace std ;

main(){
    int integer ;
    cout << "Enter integer: " ;
    cin >> integer ;
    fstream file ;
    file.open("User input.txt" , ios :: out) ;
    file << integer << endl ;
    file.close() ; 
}