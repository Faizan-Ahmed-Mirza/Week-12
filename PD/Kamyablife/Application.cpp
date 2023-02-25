#include<iostream>
#include<fstream>
#include<string>
#include <cassert>
using namespace std ;

void pizzapoints(int minorderno , int minorderprice){
    fstream customerdetails ;
    fstream freepizza ;
    string name[10] ;  
    string price ;
    int totalorder[10] , index = 0 ;
    int count = 0 ;
    string orderprice[10] ;
    customerdetails.open("customers.txt" , ios :: in) ;
    while(!customerdetails.eof()){
        customerdetails >> name[index] ;
        customerdetails >> totalorder[index] ;
        customerdetails >> orderprice[index] ;
        if(totalorder[index] >= minorderno){
            for(int i = 0 ; orderprice[index][i] != '\0' ; i++){
                if((orderprice[index][i] != '[') && (orderprice[index][i] != ',') && (orderprice[index][i] != ']')){
                    price = price + orderprice[index][i] ;
                    if(stoi(price) >= minorderprice){
                        count ++ ;
                    }
                }
                if((orderprice[index][i] == '[') || (orderprice[index][i] == ',') || (orderprice[index][i] == ']')){
                    price = "\0" ;
                }

            }
        }
        if(count >= minorderno){
            cout << name[index] << endl ;
        }
        index = index + 1 ;
        count = 0 ;
    }
    customerdetails.close() ;   
}


main(){
    int minorderno , minorderprice ;

    cout << "Enter minimum no of order: " ;
    cin >> minorderno ;
    cout << "Enter minimum order price: " ;
    cin >> minorderprice ;

    pizzapoints(minorderno , minorderprice) ;
    
}