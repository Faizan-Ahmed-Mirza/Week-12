#include<iostream>
#include<fstream>
using namespace std ;

main(){
    float number ;
    cout << "Enter decimal number: " ;
    cin >> number ;
    fstream file ;
    file.open("Part b.txt" , ios :: out) ;
    file << number << endl ;
    file.close() ;    
}