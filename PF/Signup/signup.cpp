#include<iostream>
#include<fstream>
using namespace std ;
    
string username[20] , password[20] ;
int usercount = 0 ;
fstream datafile ;

void store(){
    datafile.open("datafile.txt" , ios :: out) ;
    for(int i = 0 ; i < usercount ; i++){
        datafile << username[i] << endl << password[i] << endl ;
    }
    datafile.close() ;
}

void signin(string usernameentered , string passwordentered){
    for(int i = 0 ; i < usercount ; i++){
        if(username[i] == usernameentered && password[i] == passwordentered){
            cout << "Login Sucessfull" << endl ; return ;
        }
    }
    cout << "Invalid User!" ;
}

void viewuser(){
    string line ;
    cout << "Usernames  Passwords" << endl ;
    datafile.open("datafile.txt" , ios :: in) ;
    for(int i = 0 ; i < usercount ; i++){
        getline(datafile , line) ;
        cout << line << endl ;
    }
    datafile.close() ;
}

void loaddata(){
    string usernameentered , passwordentered ;
    datafile.open("datafile.txt" , ios :: in) ;
    while(!datafile.eof()){
        getline(datafile , usernameentered) ;
        username[usercount] = usernameentered ;
        getline(datafile , passwordentered) ;
        password[usercount] = passwordentered ;
        usercount ++ ;
    }
    datafile.close() ;
}

main(){
    loaddata() ;
    int option ;
    while(option != 4){
        cout << usercount << endl ;
        cout << "Select option: " << endl ;
        cout << "1. Signup" << endl << "2. Signin" << endl <<  "3. View Users" << endl << "4. Exit" << endl ;
        cin >> option ;

        if(option == 1){
            cout << "Enter username: " ;
            getline(cin , username[usercount]) ;
            cout << "Enter password: " ;
            getline(cin , password[usercount]) ;
            usercount++ ;
            store() ;
            cout << "Successfully added!" << endl ;
        }

        else if(option == 2){
            string usernameentered , passwordentered ;
            cout << "Enter username: " ; cin >> usernameentered ;
            cout << "Enter password: " ; cin >> passwordentered ;
            signin(usernameentered , passwordentered) ;
        }

        else if(option == 3){
            viewuser() ;
        }

    }

}