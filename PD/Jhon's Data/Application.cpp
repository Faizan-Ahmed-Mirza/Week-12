#include<iostream>
#include<fstream>
using namespace std ;

main(){
    string line ;
    string actualline ;
    fstream datafile ;
    fstream arrangedfile ;
    datafile.open("data.txt" , ios :: in) ;
    arrangedfile.open("Actual String.txt" , ios :: out) ;
    while(!datafile.eof()){
        getline(datafile , line) ;
        for(int i = 0 ; line[i] != '\0' ; i++){
            if((line[i] != '[') && (line[i] != ']') && (line[i] != '"')){
                actualline = actualline + line[i] ;
            }
        }
    }

    if(actualline.length() <= 1){
        arrangedfile << "What... why did you make this?" ;
    }
    else{
        arrangedfile << actualline ;
    }

    arrangedfile.close() ;
    datafile.close() ;
}