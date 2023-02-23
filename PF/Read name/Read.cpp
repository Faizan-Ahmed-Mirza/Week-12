#include<iostream>
#include<fstream>
using namespace std ;

main(){
    string read ;
    fstream file ;
    file.open("file.txt" , ios :: in) ;
    file >> read ; 
    file.close() ;

    cout << "name is: " << read ; 

}