#include<iostream>
#include<fstream>
using namespace std ;

void store() ;

string name ;
int age , matricmarks , interMark , ecatMark ;

void detail(){
  int number; 
  cout << "Enter name: " ;
  cin >> name ;
  cout << "Enter age: " ;
  cin >> age ;
  cout << "Enter matric marks: " ;
  cin >> matricmarks ;
  cout << "Enter intermediate marks: " ;
  cin >> interMark ;
  cout << "Enter ECAT marks: " ;
  cin >> ecatMark ;
  store() ;
}

void store(){
  fstream file;
  file.open("student.txt", ios :: app);
  file << name << endl ;  
  file << age << endl ;
  file << matricmarks << endl ;
  file << interMark << endl ;
  file << ecatMark << endl;
  file.close();
}


main(){
  cout << "Enter Student Details: " << endl ;
  detail();
}
