#include<iostream>
#include<fstream>
using namespace std ;

main(){
    bool flag ;
    char character , present[32] ;
    int index = 0 ;
    fstream file ;
    file.open("alphabets.txt" , ios :: in) ;
    while(!file.eof()){
        file >> character ;
        for(int i = 97 ; i <= 122 ; i++){
            if(char(i) == character){
                present[index] = char(i) ;
                index ++ ;
            }
        }
    }
    file.close() ;

    file.open("alphabets.txt" , ios :: app) ;
    file << '\n' ;
    for(int i = 97 ; i <= 122 ; i++){
        for(int k = 0 ; k < index ; k++){
            if(char(i) == present[k]){
                flag = true ;
            }
        }
        if(flag == false){
            file << char(i) ;
        }
        flag = false ;
    }

    file.close() ;



}