#include<iostream>
#include<fstream>
using namespace std ;

main(){
    int integer ;
    fstream file ;
    file.open("integer.txt" , ios :: in) ;
    file >> integer ;
    file.close() ;

    cout << "Integer stored is: " << integer ;
}