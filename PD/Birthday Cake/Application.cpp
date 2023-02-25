#include<iostream>
#include<fstream>
using namespace std ;

main(){
    string name[10] ;
    int age[10] , index = 0 ;
    char character ;
    fstream file ;
    file.open("data.txt" , ios :: in) ;
    while(!file.eof()){
        file >> character ;
        if(character == ','){
            file >> age[index] ;
            index = index + 1 ;
        }
        else{
            name[index] = name[index] + character ;
        }
    }
    file.close() ;

    for(int i = 0 ; i < index ; i++){
        if(age[i] % 2 == 0){
            cout << "#######################" << endl ;
            cout << "#  " << age[i] << "  HB " << name[i] << "!   " << age[i] << "  #" << endl ;
            cout << "#######################" << endl ;
        }
        else{
            cout << "***********************" << endl ;
            cout << "*  " << age[i] << "  HB " << name[i] << "!   " << age[i] << "  *" << endl ;
            cout << "***********************" << endl ;
        }
    }
}