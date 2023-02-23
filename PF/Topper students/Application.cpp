#include<iostream>
#include<fstream>
using namespace std ;

main(){
	int percentage[10] , admissionno[10] ;
	string name[10] ;
	int index = 0 ;
	int temppercentage , tempadmissionno ;
	string tempname ;
	fstream file ;
	file.open("students.txt" , ios :: in) ;
	while(!file.eof()){
		file >> name[index] ;
		file >> admissionno[index] ;
		file >> percentage[index] ;
		if(percentage[index] < 60){
			percentage[index] = 0 ;
		}
		index ++ ;
	}
	
	file.close() ;
	
	for(int i = 0 ; i < index ; i++){
		for(int k = 0 ; k < i ; k++){
			if(percentage[k] > percentage[i]){
				temppercentage = percentage[i] ;
				tempadmissionno = admissionno[i] ;
				tempname = name[i] ;
				
				percentage[i] = percentage[k] ;
				admissionno[i] = admissionno[k] ;
				name[i] = name[k] ;
				
				name[k] = tempname ;
				admissionno[k] = tempadmissionno ;
				percentage[k] = temppercentage ;
				
			}
		}
	}
	
	file.open("Toppers.txt" , ios :: out) ;
	for(int i = index-1 ; i >= 0 ; i--){
		if(percentage[i] != 0){
			file << "Name:  " << name[i] << endl ;
			file << "Admission no:  " << admissionno[i] << endl ;
			file << "Percentage:  " << percentage[i] << endl << endl << endl ;
		}
	}
	
	file.close() ;
	
	
}
