#include<iostream>
#include<fstream>
using namespace std ;

main(){
    fstream textfile ;
    fstream morsecode ;
    string line ;
    textfile.open("text.txt" , ios :: in) ;
    morsecode.open("code.txt" , ios :: app) ;
    while(!textfile.eof()){
        getline(textfile , line) ;
        for(int i = 0 ; line[i] != '\0' ; i++){
            if((line[i] == 'A') || (line[i] == 'a')){
                morsecode << ".-" ;
            }
            else if((line[i] == 'B') || (line[i] == 'b')){
                morsecode << "-..." ;
            }
            else if((line[i] == 'C') || (line[i] == 'c')){
                morsecode << "-.-." ;
            }
            else if((line[i] == 'D') || (line[i] == 'd')){
                morsecode << "-.." ;
            }
            else if((line[i] == 'E') || (line[i] == 'e')){
                morsecode << "." ;
            }
            else if((line[i] == 'F') || (line[i] == 'f')){
                morsecode << "..-." ;
            }
            else if((line[i] == 'G') || (line[i] == 'g')){
                morsecode << "--." ;
            }
            else if((line[i] == 'H') || (line[i] == 'h')){
                morsecode << "...." ;
            }
            else if((line[i] == 'I') || (line[i] == 'i')){
                morsecode << ".." ;
            }
            else if((line[i] == 'J') || (line[i] == 'j')){
                morsecode << ".---" ;
            }
            else if((line[i] == 'K') || (line[i] == 'k')){
                morsecode << "-.-" ;
            }
            else if((line[i] == 'L') || (line[i] == 'l')){
                morsecode << ".-.." ;
            }
            else if((line[i] == 'M') || (line[i] == 'm')){
                morsecode << "--" ;
            }
            else if((line[i] == 'N') || (line[i] == 'n')){
                morsecode << "-." ;
            }
            else if((line[i] == 'O') || (line[i] == 'o')){
                morsecode << "---" ;
            }
            else if((line[i] == 'P') || (line[i] == 'p')){
                morsecode << ".--." ;
            }
            else if((line[i] == 'Q') || (line[i] == 'q')){
                morsecode << "--.-" ;
            }
            else if((line[i] == 'R') || (line[i] == 'r')){
                morsecode << ".-." ;
            }
            else if((line[i] == 'S') || (line[i] == 's')){
                morsecode << "..." ;
            }
            else if((line[i] == 'T') || (line[i] == 't')){
                morsecode << "-" ;
            }
            else if((line[i] == 'U') || (line[i] == 'u')){
                morsecode << "..-" ;
            }
            else if((line[i] == 'V') || (line[i] == 'v')){
                morsecode << "...-" ;
            }
            else if((line[i] == 'W') || (line[i] == 'w')){
                morsecode << ".--" ;
            }
            else if((line[i] == 'X') || (line[i] == 'x')){
                morsecode << "-..-" ;
            }
            else if((line[i] == 'Y') || (line[i] == 'y')){
                morsecode << "-.--" ;
            }
            else if((line[i] == 'Z') || (line[i] == 'z')){
                morsecode << "--.." ;
            }
            else if(line[i] == ' '){
                morsecode << "-.-.-.-" ;
            }
        }
    }

    morsecode.close() ;
    textfile.close() ;
}