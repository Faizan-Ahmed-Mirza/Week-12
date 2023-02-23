#include<iostream>
#include<fstream>
using namespace std ;

main(){
    char character ;
    fstream file ;
    file.open("character.txt" , ios :: in) ;
    file >> character ;
    file.close() ;

    cout << "Character stored is: " << character ;
}