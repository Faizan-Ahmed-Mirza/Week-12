#include<iostream>
#include<fstream>
using namespace std ;

main(){
    char find ;
    cout << "Enter character to find: " ;
    cin >> find ;
    int count = 0 ;
    char line ;
    fstream file ;
    file.open("file.txt" , ios :: in) ;
    while(!file.eof()){
        file >> line  ;
        if(line == find){
            count ++ ;
        }
    }
    file.close() ;
    cout << "There are " << count << "  " << find << " in this file" << endl ;


}