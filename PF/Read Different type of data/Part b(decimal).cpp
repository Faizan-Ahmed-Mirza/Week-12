#include<iostream>
#include<fstream>
using namespace std ;

main(){
    float number ;
    fstream file ;
    file.open("decimal.txt" , ios :: in) ;
    file >> number ;
    file.close() ;

    cout << "Deciaml number stored is: " << number ; 
}