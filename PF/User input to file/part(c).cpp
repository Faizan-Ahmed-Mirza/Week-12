#include<iostream>
#include<fstream>
using namespace std ;

main(){
    char character ;
    cout << "Enter character: " ;
    cin >> character ;
    fstream file ;
    file.open("Part c.txt" , ios :: out) ;
    file << character ;
    file.close() ;
}