#include<iostream>
#include<fstream>
using namespace std ;

main(){
    int count = 0 ;
    char line ;
    fstream file ;
    file.open("file.txt" , ios :: in) ;
    while(!file.eof()){
        file >> line  ;
        count ++ ;
    }
    file.close() ;
    cout << "There are " << count << " characters in this file" << endl ;


}